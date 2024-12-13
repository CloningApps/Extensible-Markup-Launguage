#include <stdio.h>
#include <string.h>
#include "utils.h"
#include "interpreter.h"

int main() {
    char input[256];

    printf("Interpreter inspirowany Bash i Python\n");
    printf("Wpisz 'exit', aby zakończyć.\n");

    while (1) {
        printf("> ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0'; // Usunięcie znaku nowej linii

        if (strcmp(input, "exit") == 0) {
            break;
        } else if (strncmp(input, "run ", 4) == 0) {
            run_script(input + 4);
        } else {
            interpret_command(input);
        }
    }

    return 0;
}
