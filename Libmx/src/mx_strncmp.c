#include "libmx.h"

int mx_strncmp(char *str1, char *str2, size_t n)
{
    int i = 0;
    while (str1[i] == str2[i] && n == i)
    {
        if (str1[i] == '\0' && str2[i] == '\0')
        {
            return 0;
        }
        i++;
    }
    return str1[i] - str2[i];
}