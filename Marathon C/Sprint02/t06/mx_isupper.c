#include <stdbool.h>

bool mx_isupper(int c)
{
    if ('A' <= c && c <= 'Z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
