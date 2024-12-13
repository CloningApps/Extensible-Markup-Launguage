#ifndef UTILS_H
#define UTILS_H

// Struktury zmiennych
typedef struct {
    char name[32];
    char value[256];
} Variable;

// Prototypy funkcji z python_utils.c
const char* get_variable(const char* name);
void set_variable(const char* name, const char* value);

// Prototypy funkcji interpretera
void interpret_command(char* command);
void run_script(const char* filename);

// Prototypy funkcji z bash_utils.c
void list_files(const char* path);
void change_dir(const char* path);
void make_dir(const char* path);
void remove_file(const char* path);

#endif // UTILS_H
