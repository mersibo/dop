module top (
    input wire CLOCK_50,        // Тактовый сигнал
    input wire [9:0] SW,        // DE-series switches
    input wire [3:0] KEY,       // DE-series pushbuttons
    output wire [9:0] LEDR,     // DE-series LEDs
    output wire [6:0] HEX,      // Дисплей
    output wire key_action,     // Действие клавиши
    output wire [7:0] scan_code // Код сканирования клавиши
);
    // Реализация
    shift_reg lab6 (
        .clk(KEY[0]), 
        .data_in(SW[0]), 
        .reset(KEY[2]), 
        .enable(KEY[3]), 
        .load(KEY[1]), 
        .data_out({2'b0, LEDR[7:0]}), 
        .serial_out(LEDR[9])
    );

    // Пример значений для новых портов
    assign HEX = 7'b1111111;      // Все сегменты выключены
    assign key_action = 1'b0;     // Действие не выполняется
    assign scan_code = 8'b0;      // Нулевой скан-код
endmodule
