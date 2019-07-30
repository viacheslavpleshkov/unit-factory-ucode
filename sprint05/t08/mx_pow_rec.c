double mx_pow_rec(double n, unsigned int pow) {
    int res;

    if (pow == 0) {
        return 1;
    }
    res = mx_pow_rec(n, pow - 1);
    if (res <= 2147483647 / n) {
        return n * res;
    }
    return 0;
}