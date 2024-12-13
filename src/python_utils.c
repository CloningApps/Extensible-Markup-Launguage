#include <stdio.h>
#include <string.h>
#include "utils.h"

Variable vars[100];
int var_count = 0;

const char* get_variable(const char* name) {
    for (int i = 0; i < var_count; i++) {
        if (strcmp(vars[i].name, name) == 0) {
            return vars[i].value;
        }
    }
    return ""; // Zwróć pusty string, jeśli zmienna nie istnieje
}

void set_variable(const char* name, const char* value) {
    for (int i = 0; i < var_count; i++) {
        if (strcmp(vars[i].name, name) == 0) {
            strcpy(vars[i].value, value);
            return;
        }
    }
    strcpy(vars[var_count].name, name);
    strcpy(vars[var_count].value, value);
    var_count++;
}
