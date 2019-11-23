int mx_sum_digits(int num)
{
    int c = 0;

    if (num < 0)
    {
        num *= -1;
    }
    while (num % 10 != 0)
    {
        c = c + num % 10;
        num = num / 10;
    }
    return c;
}
