//8-bit Shift register with shift_enable

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

      
   always@(posedge clk or negedge rst_n)
     begin
        if(!rst_n)
          data_out <= data_in;
        else if(shift_en)
          data_out <= {data_out[0],data_out[WIDTH-1:1]};
     end
   
endmodule // shift_reg

