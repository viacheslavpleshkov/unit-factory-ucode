#include "libmx.h"

char **mx_strsplit(const char *s, char c)
{
    int max = 0;
    int min = 0;
    bool flag = true;
    int i = 0;
    while (s[i])
    {
        if ((s[i] == c) && flag = true)
        {
            min = i;
            flag = false;
        }
        else
        {
            max = i;
            flag = true;
        }

        if (max != 0 && min != 0)
        {
            /* code */
        }
        

        i++;
    }
}