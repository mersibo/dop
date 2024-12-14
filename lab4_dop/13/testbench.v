module testbench(
    input clk
);

  // Параметры
  parameter WIDTH = 10;

  // Сигналы
  reg rst_n;            // Сброс
  reg data_in;          // Входные данные
  reg shift_en;         // Разрешение сдвига
  reg direction;        // Направление сдвига
  wire [WIDTH-1:0] data_out; // Выход данных
  wire serial_out;      // Последовательный выход

  // Инстанцирование модуля shift_reg
  shift_reg #(.WIDTH(WIDTH)) uut (
    .clk(clk),
    .rst_n(rst_n),
    .data_in(data_in),
    .shift_en(shift_en),
    .direction(direction),
    .data_out(data_out),
    .serial_out(serial_out)
  );

  // Основной тестовый процесс
  initial begin
    // Инициализация
    rst_n = 0;
    data_in = 0;
    shift_en = 0;
    direction = 0;

    // Сброс
    #10;
    rst_n = 1;

    // Тест: сдвиг вправо
    direction = 0; // Вправо
    shift_en = 1;  // Разрешение сдвига

    // Ввод данных для сдвига вправо
    repeat (WIDTH) begin
      data_in = $random % 2; // Случайное значение (0 или 1)
      #10; // Ждём 10ns
    end

    // Отключаем сдвиг
    shift_en = 0;
    #10;

    // Тест: сдвиг влево
    direction = 1; // Влево
    shift_en = 1;  // Разрешение сдвига

    // Ввод данных для сдвига влево
    repeat (WIDTH) begin
      data_in = $random % 2; // Случайное значение (0 или 1)
      #10; // Ждём 10ns
    end

    // Завершаем симуляцию
    $finish;
  end

  // Отображение результатов
  initial begin
    $monitor("Time: %0t | data_out: %b | serial_out: %b", $time, data_out, serial_out);
  end

endmodule // testbench
