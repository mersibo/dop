module top (SW, KEY, LEDR);

    input wire [10:0] SW;        // DE-series switches
    input wire [3:0] KEY;       // DE-series pushbuttons

    output wire [10:0] LEDR;     // DE-series LEDs   

    shift_reg lab6 (KEY[0], KEY[1], SW, KEY[2], LEDR);
 
endmodule

