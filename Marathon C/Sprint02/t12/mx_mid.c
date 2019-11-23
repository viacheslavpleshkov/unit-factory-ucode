int mx_mid(int a, int b, int c)
{
    int mid;

    if ((a <= b && b <= c) || (c <= b && b <= a))
    {
        mid = b;
    }
    if ((b <= c && c <= a) || (a <= c && c <= b))
    {
        mid = c;
    }
    if ((b <= a && a <= c) || (c <= a && a <= b))
    {
        mid = a;
    }

    return mid;
}
