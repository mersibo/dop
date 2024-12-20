# Переменные для сборки
VERILATOR = verilator
VERILATOR_FLAGS = --cc --exe --build -Wall --trace --timing --Wno-fatal

# Исходные файлы для проекта
13_SRC = 13/shift_reg.v 13/testbench.v 13/top.v 13/main.cpp
13_EXE = sim13

15_SRC = 15/shift_reg.v 15/tb.v 15/top.v 15/main.cpp
15_EXE = sim15

# Главная цель: сборка и запуск всех проектов
all: $(13_EXE) $(15_EXE)
	@echo "Запуск симуляций..."
	./$(13_EXE)
	./$(15_EXE)

# Сборка проекта 13
$(13_EXE): $(13_SRC)
	$(VERILATOR) $(VERILATOR_FLAGS) --top-module testbench $^ -o $@

# Сборка проекта 15
$(15_EXE): $(15_SRC)
	$(VERILATOR) $(VERILATOR_FLAGS) --top-module tb $^ -o $@

# Очистка временных файлов
clean:
	rm -rf obj_dir $(13_EXE) $(15_EXE) *.vcd
