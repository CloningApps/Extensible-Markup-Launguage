# Nazwa programu
PROGRAM = EML

# Ścieżki
SRC_DIR = src
BUILD_DIR = build
SCRIPTS_DIR = scripts

# Pliki źródłowe i nagłówki
SRCS = $(SRC_DIR)/main.c $(SRC_DIR)/interpreter.c $(SRC_DIR)/bash_utils.c $(SRC_DIR)/python_utils.c
HEADERS = $(SRC_DIR)/utils.h $(SRC_DIR)/interpreter.h

# Kompilator i flagi
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Reguły
all: $(BUILD_DIR)/$(PROGRAM)

# Kompilacja programu
$(BUILD_DIR)/$(PROGRAM): $(SRCS) $(HEADERS) | $(BUILD_DIR)
	$(CC) $(CFLAGS) $(SRCS) -o $(BUILD_DIR)/$(PROGRAM)

# Tworzenie katalogu build, jeśli nie istnieje
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Uruchamianie interpretera
run: all
	$(BUILD_DIR)/$(PROGRAM)

# Uruchamianie przykładowego skryptu
run-script: all
	$(BUILD_DIR)/$(PROGRAM) run $(SCRIPTS_DIR)/hello.eml

# Czyszczenie plików wynikowych
clean:
	rm -rf $(BUILD_DIR)

# Informacje o Makefile
info:
	@echo "Dostępne cele:"
	@echo "  make            - Kompiluje projekt"
	@echo "  make run        - Kompiluje i uruchamia interpreter"
	@echo "  make run-script - Kompiluje i uruchamia przykładowy skrypt"
	@echo "  make clean      - Usuwa pliki wynikowe"
