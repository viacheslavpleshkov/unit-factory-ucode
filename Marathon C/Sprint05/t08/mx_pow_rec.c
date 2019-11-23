#include <stdio.h>

double mx_pow_rec(double n, unsigned int pow)
{
    double res;

    if (pow == 0)
    {
        return 1;
    }
    res = mx_pow_rec(n, pow - 1);
    if (res <= 1.79769e+308 / n)
    {
        return n * res;
    }
    
    return 0;
}
