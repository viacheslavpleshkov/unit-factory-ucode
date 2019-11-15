#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub)
{
    char *temp = mx_strstr(str, sub);

    if (str == NULL || sub == NULL)
    {
        return -2;
    }
    else if (temp == NULL)
    {
        return -1;
    }

    return temp - str;
}
