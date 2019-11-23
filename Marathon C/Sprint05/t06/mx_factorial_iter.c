int mx_factorial_iter(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n > 12 || n < 0)
    {
        return 0;
    }
    else
    {
        int num = 1;

        for (int i = 1; i <= n; i++)
        {
            num *= i;
        }

        return num;
    }
}
