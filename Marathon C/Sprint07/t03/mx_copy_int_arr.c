#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size)
{
    int *array = malloc(size);
    if (array == NULL || src == NULL)
    {
        return NULL;
    }

    for (int i = 0; i < size; i++)
    {
        array[i] = src[i];
    }

    return array;
}
