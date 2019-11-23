#include <stdbool.h>

int mx_toupper(int c)
{
    if (65 <= c && c <= 90)
    {
        return c;
    }
    else
    {
        return (c - 32);
    }
}
