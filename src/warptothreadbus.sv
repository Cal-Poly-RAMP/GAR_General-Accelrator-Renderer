`default_nettype none
`timescale 1ns/1ns

module warptothreadbus #(
    parameter THREADS_PER_BLOCK = 4,
    parameter THREADS_PER_WARP  = 2,
    parameter WARPS_PER_CORE   = 2
) (
    input  wire clk,
    input  wire reset,
    input  wire [3:0] warp,

    // Use 'logic' for ports in SystemVerilog
    input  logic [7:0] rs_regs[0:THREADS_PER_BLOCK-1],
    input  logic [7:0] rt_regs[0:THREADS_PER_BLOCK-1],
    input  logic [7:0] lsu_out_computes[0:THREADS_PER_WARP-1],
    input  logic [7:0] alu_out_computes[0:THREADS_PER_WARP-1],

    // This should be an array of indices, 
    // width should be $clog2(THREADS_PER_BLOCK)
    input  wire [$clog2(THREADS_PER_BLOCK):0] Running_Threads [0:THREADS_PER_WARP-1],

    output logic [7:0] rs_computes[0:THREADS_PER_WARP-1],
    output logic [7:0] rt_computes[0:THREADS_PER_WARP-1],
    output logic [7:0] lsu_out_regs[0:THREADS_PER_BLOCK-1],
    output logic [7:0] alu_out_regs[0:THREADS_PER_BLOCK-1]
);

    always_comb begin
        if (reset) begin
            // Simplified reset using array assignment
            for (int i = 0; i < THREADS_PER_WARP; i++) begin
                rs_computes[i] = 8'h0;
                rt_computes[i] = 8'h0;
            end
            for (int i = 0; i < THREADS_PER_BLOCK; i++) begin
                lsu_out_regs[i] = 8'h0;
                alu_out_regs[i] = 8'h0;
            end
        end else begin
            for (int i = 0; i < THREADS_PER_WARP; i++) begin
                // Map the active warp threads to the global thread block registers
                lsu_out_regs[Running_Threads[i]] = lsu_out_computes[i];
                alu_out_regs[Running_Threads[i]] = alu_out_computes[i];
                
                rs_computes[i] = rs_regs[Running_Threads[i]];
                rt_computes[i] = rt_regs[Running_Threads[i]];
            end
        end
    end
endmodule