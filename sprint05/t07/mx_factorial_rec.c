int mx_factorial_rec(int n) {
    if (n == 0) {
        return 1;
    } else if (n > 12 || n < 0) {
        return 0;
    }
    int num = 0;
    num = n;
    return num * mx_factorial_rec(n -1);
} 
