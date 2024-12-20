module top (
    input wire [9:0] SW,        // DE-series switches
    input wire [3:0] KEY,       // DE-series pushbuttons
    output wire [9:0] LEDR      // DE-series LEDs
);

    shift_reg lab6 (
    .clk(KEY[0]),
    .rst_n(KEY[1]),
    .data_in(SW[9:0]),
    .shift_en(KEY[2]),
    .data_out(LEDR[9:0])
);

endmodule
