#include <stdio.h>
#include <string.h>
#include "utils.h"
#include "bash_utils.h"
#include "python_utils.h"

void interpret_command(char* command) {
    char cmd[256], arg1[256], arg2[256];

    if (sscanf(command, "set %s %[^\n]", arg1, arg2) == 2) {
        set_variable(arg1, arg2);
    } else if (strcmp(command, "ls") == 0) {
        list_files(".");
    } else if (strncmp(command, "ls ", 3) == 0) {
        list_files(command + 3);
    } else if (strncmp(command, "cd ", 3) == 0) {
        change_dir(command + 3);
    } else if (strncmp(command, "mkdir ", 6) == 0) {
        make_dir(command + 6);
    } else if (strncmp(command, "rm ", 3) == 0) {
        remove_file(command + 3);
    } else if (strncmp(command, "print ", 6) == 0) {
        printf("%s\n", get_variable(command + 6));
    } else {
        printf("Nieznana komenda: %s\n", command);
    }
}

void run_script(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (!file) {
        printf("Nie można otworzyć pliku: %s\n", filename);
        return;
    }

    char line[256];
    while (fgets(line, sizeof(line), file)) {
        line[strcspn(line, "\n")] = '\0'; // Usunięcie znaku nowej linii
        interpret_command(line);
    }

    fclose(file);
}
