//8-bit Shift register with shift_enable
`timescale 1ns / 1ps
module shift_reg
#(
  parameter WIDTH=10
)
(
 input                  clk,
 input                  rst_n,
 input                  data_in,
 input                  shift_en,
 input                  direction,
 
 output reg [WIDTH-1:0] data_out,
 output                 serial_out      
 );

      
   always@(posedge clk or negedge rst_n)
     begin
        if(!rst_n)
          data_out <= {WIDTH{1'b0}};
        else if(shift_en)
          if(direction) begin
            data_out <= {data_out[WIDTH-2:0],data_in}; 
          end
          else begin
            data_out <= {data_in,data_out[WIDTH-1:1]};
          end
     end
   
   assign serial_out = data_out[0];
   
endmodule // shift_reg

