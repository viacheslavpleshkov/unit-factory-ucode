#include "libmx.h"

char *mx_strnew(const int size) {

    if (size == NULL) {
        return NULL;
    }
    char *memory = (char *) malloc((size + 1) * sizeof(char));

    if (!memory) {
        return NULL;
    }
    for (int i = 0; i < size; i++) {
        memory[i] ='\0';
    }
    return memory;
}
