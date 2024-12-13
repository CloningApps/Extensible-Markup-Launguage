#include <stdio.h>
#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>

void list_files(const char* path) {
    DIR* dir = opendir(path);
    if (!dir) {
        printf("Nie można otworzyć katalogu: %s\n", path);
        return;
    }
    struct dirent* entry;
    while ((entry = readdir(dir)) != NULL) {
        printf("%s\n", entry->d_name);
    }
    closedir(dir);
}

void change_dir(const char* path) {
    if (chdir(path) != 0) {
        printf("Nie można zmienić katalogu na: %s\n", path);
    }
}

void make_dir(const char* path) {
    if (mkdir(path, 0755) != 0) {
        printf("Nie można utworzyć katalogu: %s\n", path);
    }
}

void remove_file(const char* path) {
    if (remove(path) != 0) {
        printf("Nie można usunąć: %s\n", path);
    }
}
