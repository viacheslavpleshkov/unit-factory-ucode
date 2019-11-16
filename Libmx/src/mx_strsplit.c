#include "libmx.h"

char **mx_strsplit(const char *s, char c)
{
    int max = 0;
    int min = 0;

    bool flag = true;
    int i = 0, j = 0;
    //memory
	char **new = (char **)malloc(sizeof(char *) * (mx_count_words(s, c) + 1));

    while (s[i])
    {
        if ((s[i] == c) && (flag = true))
        {
            min = i;
            flag = false;
        }
        else
        {
            max = i;
            flag = true;
        }

        if ((max != 0) && (min != 0) && (flag = true))
        {
            new[j] = mx_strnew(max -min);
            j++;
            min =0;
            max = 0;

        }
        i++;
    }
    new[j] = NULL;
    return new;
}