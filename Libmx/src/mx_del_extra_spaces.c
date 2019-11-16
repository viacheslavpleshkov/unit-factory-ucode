#include "libmx.h"

char *mx_del_extra_spaces(const char *str)
{
    if (str == NULL)
    {
        return NULL;
    }

    char *memory = mx_strnew(mx_strlen(str));
    int i = 0, j = 0;
    while (str[i])
    {
        if (!(mx_is_space(str[i])))
        {
            memory[j] = str[i];
            j++;
        }
        if (!(mx_is_space(str[i])) && mx_is_space(str[i + 1]))
        {
            memory[j] = ' ';
            j++;
        }

        i++;
    }
    char *clear = mx_strtrim(memory);
    free(clear);
    return clear;
}
