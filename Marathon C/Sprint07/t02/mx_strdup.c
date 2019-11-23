#include <stdlib.h>

void mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strdup(const char *s1)
{
    char *duplicate = mx_strnew(mx_strlen(s1));

    mx_strcpy(duplicate, s1);
    
    return duplicate;
}
