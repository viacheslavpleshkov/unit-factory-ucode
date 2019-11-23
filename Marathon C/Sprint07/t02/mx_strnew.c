#include <stdlib.h>

char *mx_strnew(const int size)
{
    if (size < 0)
    {
        return NULL;
    }

    char *memory = NULL;
    int i = 0;

    memory = (char *)malloc((size + 1) * sizeof(char));
    while (i < size)
    {
        memory[i] = '\0';
        i++;
    }
    memory[i] = '\0';

    return memory;
}

