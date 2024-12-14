module top (SW, KEY, LEDR);

    input wire [9:0] SW;        // DE-series switches
    input wire [3:0] KEY;       // DE-series pushbuttons

    output wire [11:0] LEDR;     // DE-series LEDs   

    shift_reg lab6 (KEY[0], SW[0], KEY[2], KEY[3], KEY[1], {2'b0, LEDR[7:0]}, LEDR[9]);

 
endmodule

