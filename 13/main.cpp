#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtestbench.h"  // Сгенерированный класс тестбенча Verilator

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    // Создаём экземпляр тестбенча
    Vtestbench* tb = new Vtestbench;

    // Подключаем трассировку
    VerilatedVcdC* tfp = nullptr;
    Verilated::traceEverOn(true);
    tfp = new VerilatedVcdC;
    tb->trace(tfp, 99);
    tfp->open("waveform.vcd");

    // Инициализация
    tb->clk = 0;  // Изначально тактовый сигнал = 0

    // Основной цикл симуляции
    while (!Verilated::gotFinish()) {
        // Генерация тактового сигнала
        tb->clk = !tb->clk;
        tb->eval();  // Оценка текущего состояния
        tfp->dump(Verilated::time());  // Сохраняем в VCD-файл
        Verilated::timeInc(1);  // Увеличиваем время
    }

    // Завершаем симуляцию
    tfp->close();
    delete tb;
    delete tfp;
    return 0;
}
