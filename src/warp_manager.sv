`default_nettype none
`timescale 1ns/1ns

/* Warp Builder
* The goal of this block to the split up the jobs of the warp schedular into more digestable jobs
* this job is to take the thread that are sent the the SM and the put them into groups called warps.
* A warp is a group of threads of a static size difined by the archtecter that are to be run in parallel on a core.
* In industy the warp size is a static 32 threads in the case of GAR the user will be able to set the size of warps.
* The Module will also be responcable for reodering warps if that is required
* Inputs 
* (Threads, Next_PCs, Thread_count)
* Outputs
* (Warps_id, Num_Warps)
*/

module warp_manager #(
    parameter THREADS_PER_WARP = 2,
    parameter THREADS_PER_BLOCK = 4,
    parameter WARPS_PER_CORE = 2,
    parameter DATA_MEM_DATA_BITS = 8
    )(
    input wire clk,
    input wire reset,
    input wire start,
    input reg [$clog2(THREADS_PER_BLOCK):0] thread_count,

    // input reg [WARPS_PER_CORE:0] done,
    input wire [3:0] warp,
    input wire [7:0] warps_states [WARPS_PER_CORE-1:0],
    input wire [1:0] warp_status [WARPS_PER_CORE-1:0],
    


    // Divergence and Rejoin Events
    input wire [7:0] next_pcs [THREADS_PER_WARP-1:0],
    input reg [2:0] core_state, // State of the core to determine when to push/pop the stack
    input reg divergence_event, // Signal indicating a divergence event (e.g., branch instruction)
    input reg rejoin_event, // Signal indicating a rejoin event (e.g., reconvergence point)
    input reg [DATA_MEM_DATA_BITS-1:0] decoded_immediate,
    output reg [7:0] rejoin_event_pc, // The PC to rejoin to on a JOINER instruction after divergence

    output reg [WARPS_PER_CORE-1:0] empty,
    output reg [THREADS_PER_BLOCK-1:0] masks,
    output reg [THREADS_PER_WARP-1:0] head,
    output reg [3:0] warp_ids [THREADS_PER_BLOCK-1:0],
    output reg [$clog2(THREADS_PER_BLOCK):0] warp_groups[0:WARPS_PER_CORE-1][0:THREADS_PER_WARP-1],
    

    output reg done,
    output wire [7:0] total_warps
);
    // Calculate the total number of blocks based on total threads & threads per block
    assign total_warps = (thread_count + THREADS_PER_WARP - 1) / THREADS_PER_WARP;

    // Keep track of how many warps have been processed
    reg done_warps [WARPS_PER_CORE-1:0];
    reg [7:0] warps_dispatched; // What warps have been dispatched
    reg [7:0] warps_done; // How many blocks have finished processing?
    reg start_execution; // EDA: Unimportant hack used because of EDA tooling


    /**************************************************************************************************************
     * These are the signals that are required for the divergence stack module
     * warp_next_mask is the mask of that the warp will use next afters and convergence event occurs
    ***************************************************************************************************************/
    reg [THREADS_PER_WARP-1:0] warp_next_mask;
    reg [THREADS_PER_WARP-1:0] head_next; // This is used to keep track of which thread in the warp is the next one to execute after a divergence event (used for indexing into next_pc)
    reg [THREADS_PER_WARP-1:0] current_mask;
    reg [THREADS_PER_WARP-1:0] rejoining_threads_mask;
    reg [THREADS_PER_WARP-1:0] rejoin_event_head; // The head to rejoin to on a JOINER instruction after divergence
     // Signal to indicate if the divergence stack is empty (no active divergences)
    genvar i;
    generate
        for (i = 0; i < WARPS_PER_CORE; i = i + 1) begin : divergence_stack_gen
            divergence_stack #(THREADS_PER_WARP, THREADS_PER_BLOCK, WARPS_PER_CORE) divergence_stack_inst (
                .clk(clk),
                .reset(reset),
                .enable(i == warp),
                .warp_next_mask(warp_next_mask),
                .head_next(head_next),
                .next_pc(decoded_immediate),
                .divergence_event(divergence_event),
                .rejoin_event(rejoin_event),
                .core_state(core_state),
                .rejoining_threads_mask(rejoining_threads_mask),
                .rejoining_head(rejoin_event_head),
                .rejoining_pc(rejoin_event_pc),
                .empty(empty[i])
            );
        end
    endgenerate

    always @(posedge clk) begin
        if (reset) begin
            warps_done <= 0;
            start_execution <=0;
            done <=0;
            head <= 0;
            head_next <= 0;
            warp_next_mask <= {THREADS_PER_WARP{1'b0}};
            masks <={THREADS_PER_BLOCK{1'b1}};
            for (int i = 0; i < WARPS_PER_CORE; i++) begin
                done_warps[i] <= 0;
            end
            for (int i = 1; i < THREADS_PER_BLOCK; i++) begin
                    warp_ids[i] <= (THREADS_PER_BLOCK/THREADS_PER_WARP);
                    
            end
            for (int i = 0; i < WARPS_PER_CORE; i++) begin
                for (int j = 0;  j< THREADS_PER_WARP; j++) begin
                    warp_groups[i][j] <= 0;
                end
            end
        end else if (start) begin   
            if (!start_execution) begin 
                for (int i = 0; i < WARPS_PER_CORE; i++) begin
                    for (int j = 0;  j< THREADS_PER_WARP; j++) begin
                        warp_ids[(THREADS_PER_WARP*i)+j] <= i;
                        warp_groups[i][j] <= ((THREADS_PER_WARP*i)+j);
                    end
                end
                start_execution <=1;
            end
            if (warps_done == total_warps) begin 
                done <= 1;
            end

            /*TODO: change this for loop and if statement to deal with
            * done warps and not blocks and to reorder the curren
            */
            for (int i = 0; i < WARPS_PER_CORE; i++) begin
                if ((warps_states[i] == 3'b111) && (i < total_warps) && (done_warps[i] == 0)) begin
                    // If a core just finished executing it's current block, reset it
                    //warp_
                    warps_done <= warps_done + 1;
                    done_warps[i] <= 1;
                end
            end
            if (divergence_event && core_state == 3'b110) begin
                // Handle divergence event (e.g., update masks for the affected warp)
                // This is a placeholder for the actual logic to handle divergence
                // You would need to determine which threads are diverging and update the masks accordingly
                warp_next_mask <= {THREADS_PER_WARP{1'b0}};
                //current_mask <= masks[warp_ids[warp]];
                for (int i =0; i < THREADS_PER_WARP; i++) begin
                    if (next_pcs[i] == decoded_immediate) begin
                        head_next <= i;
                        warp_next_mask[i] <= 1; // Update the next mask for the diverging thread
                        masks[warp_groups[warp][i]] <= 0; // Disable the diverging thread in the mask
                    end
                    else begin
                        if (masks[warp_groups[warp][i]] == 1) // Keep the other threads' mask values the same
                        begin
                            head <= i;
                        end
                    end
                end
            end
            if (rejoin_event && core_state == 3'b101) begin
                // Handle rejoin event (e.g., update masks to allow diverged threads to rejoin)
                // This is a placeholder for the actual logic to handle rejoin
                // You would need to determine which threads are rejoining and update the masks accordingly
                // Pop the divergence stack to get the previous mask and update accordingly
                for (int i = 0; i < THREADS_PER_WARP; i++) begin
                    masks[warp_groups[warp][i]] <= rejoining_threads_mask[i]; // Re-enable the rejoining threads in the mask
                end
                 // Update the mask for the rejoining thread
                head <= rejoin_event_head;
            end
        
        end
    end
endmodule