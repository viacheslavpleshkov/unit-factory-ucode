#include "libmx.h"

int mx_arrlen(char **arr)
{
    int length = 0;

    while (*arr)
    {
        length++;
        arr++;
    }
    return length;
}
