`default_nettype none
`timescale 1ns / 1ns

// ARITHMETIC-LOGIC UNIT
// > Executes computations on register values
// > In this minimal implementation, the ALU supports the 11 basic arithmetic operations
// > Each thread in each core has it's own ALU
// > Risc-V arithmetic operations are all executed here
module alu (
    input wire clk,
    input wire reset,
    input wire enable, // If current block has less threads then block size, some ALUs will be inactive

    input reg [2:0] core_state,

    input reg [3:0] decoded_alu_arithmetic_mux,
    input reg decoded_alu_output_mux,

    input  reg  [31:0] rs,
    input  reg  [31:0] rt,
    input  reg  [31:0] U_immed,  //Used for LUI instruction
    output wire [31:0] alu_out
);

  // Enumerates operations to make alu_arithmetic_mux logic more readable
  localparam ADD = 4'b0000,
        SUB = 4'b1000,
        OR = 4'b0110,
        AND = 4'b0111,
        XOR = 4'b0100,
        SRL = 4'b0101,
        SLL = 4'b0001,
        SRA = 4'b1101,
        SLT = 4'b0010,
        SLTU = 4'b0011,
        LUI = 4'b1001;

  reg [7:0] alu_out_reg;
  assign alu_out = alu_out_reg;

  always @(posedge clk) begin
    if (reset) begin
      alu_out_reg <= 8'b0;
    end else if (enable) begin
      // Calculate alu_out when core_state = EXECUTE
      if (core_state == 3'b101) begin
        if (decoded_alu_output_mux == 1) begin
          // Set values to compare with NZP register in alu_out[2:0]
          alu_out_reg <= {5'b0, (rs - rt > 0), (rs - rt == 0), (rs - rt < 0)};
        end else begin
          // Execute the specified arithmetic instruction
          case (decoded_alu_arithmetic_mux)
            ADD: begin
              alu_out_reg <= rs + rt;
            end
            SUB: begin
              alu_out_reg <= rs - rt;
            end
            OR: begin
              alu_out_reg <= rs | rt;
            end
            AND: begin
              alu_out_reg <= rs & rt;
            end
            XOR: begin
              alu_out_reg <= rs ^ rt;
            end
            SRL: begin
              alu_out_reg <= rs >> rt;
            end
            SLL: begin
              alu_out_reg <= rs << rt;
            end
            SRA: begin
              alu_out_reg <= rs >>> rt;
            end
            SLT: begin
              alu_out_reg <= $signed(rs) < $signed(rt);
            end
            SLTU: begin
              alu_out_reg <= rs < rt;
            end
            LUI: begin
              alu_out_reg <= U_immed;
            end
            default: begin
              alu_out_reg = 32'd0;  //Should never occur, but simplifies EDA
            end
          endcase
        end
      end
    end
  end
endmodule
