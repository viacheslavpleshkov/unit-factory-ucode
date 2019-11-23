#include <stdlib.h>
#include <stdbool.h>

int mx_strlen(const char *s);
char *mx_strnew(const int size);
bool mx_is_space(char c);
char *mx_strndup(const char *s1, size_t n);

char *mx_strtrim(const char *str)
{
    int len = 0;
    char *new = NULL;

    while (mx_is_space(*str))
    {
        str++;
    }
    len = mx_strlen(str);
    while (mx_is_space(str[len - 1]))
    {
        len--;
    }
    new = mx_strndup(str, len);

    return (char *)new;
}