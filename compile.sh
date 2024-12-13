#!/bin/bash

# Kompilacja projektu języka programowania
# Zakłada, że masz zainstalowany kompilator GCC

# Sprawdzenie, czy folder build istnieje, jeśli nie, to go utwórz
if [ ! -d "build" ]; then
  echo "Tworzę folder build..."
  mkdir build
fi

# Kompilowanie plików źródłowych
echo "Kompilowanie projektu..."

gcc -Wall -Wextra -std=c11 -o build/executable src/main.c src/interpreter.c src/bash_utils.c src/python_utils.c

# Sprawdzanie, czy kompilacja zakończyła się sukcesem
if [ $? -eq 0 ]; then
  echo "Kompilacja zakończona sukcesem."
else
  echo "Błąd kompilacji. Sprawdź kod źródłowy."
  exit 1
fi

# Uruchomienie programu, jeśli kompilacja była udana
echo "Uruchamianie programu..."
./build/executable

# Zakończenie skryptu
exit 0
