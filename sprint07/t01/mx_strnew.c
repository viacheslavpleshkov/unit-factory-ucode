#include <stdlib.h>

char *mx_strnew(const int size) {
    if (size < 1) {
        return NULL;
    } else {
        char *memory = (char *)malloc(size + 1);
        for (int i = 0; i < size; i++) {
            memory[i] = '\0';
        }
        memory[size] = '\0';
        return memory;
    }
}

