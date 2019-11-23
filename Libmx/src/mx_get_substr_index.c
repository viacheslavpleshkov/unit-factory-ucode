#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub)
{
    if (sub && str)
    {
        int index = 0;
        int sublen = mx_strlen(sub);

        while (*str)
        {
            if (mx_strncmp(str, sub, sublen) == 0)
                return index;
            index++;
            str++;
        }

        return -1;
    }
    
    return -2;
}
