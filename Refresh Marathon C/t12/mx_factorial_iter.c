int mx_factorial_iter(int n)
{
    int res = 1;

    if (n > 12 || n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }
    for (int i = 1; i <= n; ++i)
    {
        res *= i;
    }
    return res;
}
