# Składnia Nowego Języka Programowania  

Język programowania inspirowany Bash i Python pozwala na wykonywanie podstawowych operacji na plikach, katalogach, zmiennych i wyświetlaniu wyników.  

## **Podstawowe komendy**

### **1. Zarządzanie zmiennymi**  
- **Ustawianie zmiennej:**  
  ```plaintext
  set <nazwa_zmiennej> <wartość>

Przykład:

set name "John"
set age 30

Wyświetlanie zmiennej:

print <nazwa_zmiennej>

Przykład:

print name
print age

2. Operacje na katalogach i plikach

Wyświetlenie zawartości katalogu:

``ls [<ścieżka>]``

Przykład:

``ls
ls home/user``

Zmiana katalogu:

``cd <ścieżka>``

Przykład:

``cd /home/user/documents``

Tworzenie katalogu:

``mkdir <nazwa_katalogu>``

Przykład:

``mkdir new_folder``

Usuwanie pliku lub katalogu:

``rm <nazwa_pliku_lub_katalogu>``

Przykład:

``rm old_file.txt
rm old_folder``

3. Uruchamianie skryptów

Uruchomienie innego skryptu:

``run <ścieżka_do_skryptu>``

Przykład:

``run scripts/hello.eml``

# Komentarze

Linie zaczynające się od ``#`` są traktowane jako komentarze.
Przykład:

``# To jest komentarz
set message "Hello"
print message``

# Przykładowy skrypt

```
set name "Alice"
set greeting "Hello"

# Wyświetlenie komunikatu
print greeting
print name

# Operacje na katalogach
mkdir test_folder
cd test_folder
ls```

```plaintext
# Witaj w przykładzie!

# Ustaw zmienną i wyświetl jej wartość
set message "Hello, World!"
print message

# Stwórz katalog, wejdź do niego, a następnie wyświetl zawartość
mkdir example_folder
cd example_folder
ls
