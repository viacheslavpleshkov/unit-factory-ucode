int mx_gcd(int a, int b);

int mx_lcm(int a, int b)
{
    return (a * b) / mx_gcd(a, b);
}
