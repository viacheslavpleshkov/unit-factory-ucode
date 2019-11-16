#include "libmx.h"

char *mx_strnew(const int size)
{
    char *memory = (char *)malloc((size + 1) * sizeof(char));

    if (!memory)
    {
        return NULL;
    }

    int i = 0;
    while (i < size)
    {
        memory[i] = '\0';
        i++;
    }
    memory[i] = '\0';
    return memory;
}
