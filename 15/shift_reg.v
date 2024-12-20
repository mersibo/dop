`timescale 1ns / 1ps
module shift_reg
#(
  parameter WIDTH=10
)
(
 input                  clk,
 input                  rst_n,
 input [WIDTH-1:0]      data_in,
 input                  shift_en,
 
 output reg [WIDTH-1:0] data_out  
 );

   always @(posedge clk or negedge rst_n) begin
       if (!rst_n)
           data_out <= {WIDTH{1'b0}}; // Reset to zero
       else if (shift_en)
           data_out <= {data_out[WIDTH-2:0], data_in[0]};
   end
   
endmodule // shift_reg
