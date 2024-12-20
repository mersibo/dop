`timescale 1ns / 1ns
`default_nettype none

module tb();

    reg CLOCK_50 = 0;               // DE-series 50 MHz clock
    reg [9:0] SW = 0;               // DE-series SW switches
    reg [3:0] KEY = 0;              // DE-series pushbutton keys
    wire [9:0] LEDR;                // DE-series LEDs

    // Clock signal generation
    always #10
        CLOCK_50 <= ~CLOCK_50;

    // Instantiate the top module
    top DUT (
        .SW(SW),
        .KEY(KEY),
        .LEDR(LEDR)
    );

endmodule
