#include "libmx.h"

char *mx_strndup(const char *s1, size_t n)
{
    char *duplicate = mx_strnew(n);
    if (!duplicate)
    {
        return NULL;
    }
    mx_strncpy(duplicate, s1, n);
    return duplicate;
}
