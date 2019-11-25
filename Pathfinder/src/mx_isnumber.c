#include "pathfinder.h"

bool mx_isnumber(char *s)
{
    int i = -1;

    while (s[++i])
        if (!mx_isdigit(s[i]))
            return false;
    return true;
}
