


/*-------------------------------------------DIVERGENCE STACK MODULE-------------------------------------------------
 * The goal of this module to to track the divergence of each warp if they are diverged and will rejoin at some point 
 * in the future. This is necessary to know when to switch between warps and when to wait for a warp to rejoin before 
 * switching back.
 *  
 *
 *
 *TODO: Make a tracker to 
 *
 *
 *
 *
 *
 *-----------------------------------------------------------------------------------------------------------------*/


`default_nettype none
`timescale 1ns/1ns

module  divergence_stack #(
    parameter THREADS_PER_WARP = 2,
    parameter THREADS_PER_BLOCK = 4,
    parameter WARPS_PER_CORE = 2
    )(
    input wire clk,
    input wire reset,
    input wire enable, // Only update the stack when the current block is active (some threads may be inactive if block size < max block size)

    input reg [THREADS_PER_WARP-1:0] warp_next_mask, // Mask of active threads in the current warp
    input reg [THREADS_PER_WARP-1:0] head_next,
    input reg [7:0] next_pc, // Current program counter for the warp
    input reg divergence_event, // Signal indicating a divergence event (e.g., branch instruction)
    input reg rejoin_event, // Signal indicating a rejoin event (e.g., reconvergence point)
    input reg [2:0] core_state, // State of the core to determine when to push/pop the stack

    //output reg [THREADS_PER_WARP-1:0] current_divergence_mask, // Mask of currently diverged threads
    output reg [THREADS_PER_WARP-1:0] rejoining_threads_mask, // Mask of threads that are 
    output reg [7:0] rejoining_head, // The PC to rejoin to on a JOINER instruction after divergence
    output reg [7:0] rejoining_pc,
    output reg empty

);
    reg [THREADS_PER_WARP-1:0] divergence_stack [0:THREADS_PER_WARP-1]; // Stack to track divergence masks
    reg [7:0] pc_stack [0:THREADS_PER_WARP-1]; // Stack to track program counters
    reg [THREADS_PER_WARP-1:0] head_stack  [0:THREADS_PER_WARP-1];;   
    reg [THREADS_PER_WARP-1:0] stack_pointer; // Pointer to the top of the stack

    always @(posedge clk) begin
        if (reset)begin
            for(int i = 0; i < THREADS_PER_WARP; i++) begin
                divergence_stack[i] <= 0;
                pc_stack[i] <= 0;
            end
            stack_pointer <= 0;
            rejoining_threads_mask <= 0;
            //current_divergence_mask <= 0;
        end
        else if (enable) begin
            if (divergence_event && core_state == 3'b000) begin
                // Push the current active mask onto the stack
                divergence_stack[stack_pointer] <= warp_next_mask;
                head_stack[stack_pointer] <= head_next;
                pc_stack[stack_pointer] <= next_pc; // Store the PC at which divergence occurred
                stack_pointer <= stack_pointer + 1;

                // Update the current divergence mask based on the new divergence event
                //current_divergence_mask <= warp_next_mask; // This is a simplification, actual logic may be more complex
            end

            if (rejoin_event && core_state == 3'b100) begin
                if (stack_pointer > 0) begin
                    // Pop the top of the stack to get the previous divergence mask
                    
                    rejoining_threads_mask <= divergence_stack[stack_pointer-1]; // Update to previous divergence mask
                    rejoining_head <= head_stack[stack_pointer-1];
                    rejoining_pc <= pc_stack[stack_pointer-1]; // Get the PC to rejoin to
                    empty <= 0; // Indicate that the stack is empty
                    stack_pointer <= stack_pointer - 1;
                    // Update rejoining threads mask (this is a simplification)
                    //rejoining_threads_mask <= warp_next_mask & ~current_divergence_mask; // Threads that are rejoining
                end else begin
                    // No more divergence to pop, reset masks
                    //current_divergence_mask <= {THREADS_PER_WARP{1'b1}};
                    empty <= 1; // Indicate that the stack is empty
                    rejoining_threads_mask <= {THREADS_PER_WARP{1'b1}};
                    rejoining_head <= 0;
                end
            end
        end
    end
endmodule