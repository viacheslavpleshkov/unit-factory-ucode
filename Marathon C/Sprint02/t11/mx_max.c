int mx_max(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        return a;
    }
    else if (a <= b && b >= c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
