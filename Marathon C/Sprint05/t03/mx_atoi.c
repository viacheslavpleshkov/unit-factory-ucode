#include <stdbool.h>

bool mx_isdigit(int c);

bool mx_atoi(const char *str, int *num)
{
    int sum = 0;
    int sign = 0;

    if (*str != '+' && *str != '-' && !st_isdigit(*str))
        return false;

    if (*str == '+' || *str == '-')
        sign = *str++ == '-';

    while (*str && st_isdigit(*str))
        sum = sum * 10 + *str++ - 48;

    if (*str)
        return false;

    *num = sign ? -sum : sum;
    return true;
}
