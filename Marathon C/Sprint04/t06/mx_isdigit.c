#include <stdbool.h>

bool mx_isdigit(int c)
{

    if (0 <= c && c <= 9)
    {
        return true;
    }
    else
    {
        return false;
    }
}
