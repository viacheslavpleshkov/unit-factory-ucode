#include <stdlib.h>

char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);

char *mx_strndup(const char *s1, size_t n)
{
    char *duplicate = mx_strnew(n);

    mx_strncpy(duplicate, s1, n);
    
    return duplicate;
}
