# Nowy Język Programowania: Bash-Python Inspired Interpreter

Ten projekt to interpreter nowego języka programowania, który łączy funkcjonalności Bash i Python.  
Możesz definiować zmienne, używać aliasów, wykonywać operacje na plikach i katalogach oraz uruchamiać skrypty zapisane w plikach `.eml`.

## **Funkcje**

- Obsługa zmiennych (`set`, `print`)
- Operacje na plikach i katalogach (`ls`, `mkdir`, `cd`, `rm`)
- Uruchamianie skryptów
- Czytelna i prosta składnia

## **Przykład składni**

Przykładowy skrypt (`scripts/hello.eml`):

```plaintext
set message "Hello, World!"
print message

mkdir test_folder
cd test_folder
set number 42
print number
```

# Struktura projektu

project/
├── src/               # Kod źródłowy
│   ├── main.c
│   ├── interpreter.c
│   ├── bash_utils.c
│   ├── python_utils.c
│   └── utils.h
├── scripts/           # Przykładowe skrypty
│   ├── hello.eml
│   └── test.eml
├── build/             # Wyniki kompilacji
│   └── executable
└── docs/              # Dokumentacja
    ├── README.md
    └── syntax.md

# Wymagania

Kompilator C (np. GCC)

System operacyjny Linux (obsługa funkcji systemowych, np. mkdir, ls)

# Instalacja i uruchomienie

1. Sklonuj repozytorium: ``git clone https://github.com/CloningApps/Extensible-Markup-Launguage.git``
2. Skompiluj projekt: ``make``
3. Uruchom interpreter: ``make run``
4. Uruchom skrypt: ``make run-script``
5. Usuń pliki wynikowe: ``make clean``

# Jak dodać nowe funkcje

1. Dodaj nową funkcję do odpowiedniego pliku (bash_utils.c lub python_utils.c).
2. Zarejestruj nową komendę w interpreter.c w funkcji interpret_command.
3. Skompiluj projekt za pomocą make.

# Licencja

Projekt dostępny na licencji MIT. Szczegóły w pliku LICENSE.

### **LICENSE** (MIT License)

```plaintext
MIT License

Copyright (c) 2024

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
