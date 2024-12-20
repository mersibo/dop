#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtb.h" // Верхний модуль, сгенерированный Verilator

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    // Создаем экземпляр модели
    Vtb* top = new Vtb;

    VerilatedVcdC* trace = new VerilatedVcdC;
    top->trace(trace, 99); // Устанавливаем максимальный уровень трассировки
    trace->open("waveform.vcd");

    // Инициализация сигналов
    top->CLOCK_50 = 0;
    top->KEY = 0b1111; // Все кнопки отпущены
    top->SW = 0;       // Все переключатели выключены

    // Симуляционный цикл
    for (int i = 0; i < 200; ++i) { // Симулируем 200 тактов
        top->CLOCK_50 = !top->CLOCK_50;

        // Сброс на первых 10 тактах
        if (i < 10) {
            top->KEY = 0b1110; // Активируем KEY[0] для сброса
        } else {
            top->KEY = 0b1111; // Отключаем сброс
        }

        top->eval();
        trace->dump(i);
    }

    trace->close();
    delete top;
    delete trace;

    return 0;
}
