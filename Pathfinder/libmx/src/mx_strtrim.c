#include "libmx.h"

char *mx_strtrim(const char *str)
{
    while (mx_is_space(*str))
    {
        str++;
    }

    int len = mx_strlen(str);

    while (mx_is_space(str[len - 1]))
    {
        len--;
    }

    char *new = mx_strndup(str, len);
    return (char *)new;
}
