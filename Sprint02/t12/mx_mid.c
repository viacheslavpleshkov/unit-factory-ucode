int mx_mid(int a, int b, int c) {
    if (a > b) {
        if (a > c) {
            return b;
        } else if (c > a) {
            return a;
        } else {
            return c;
        }
    } else {
        if (b < c) {
            return b;
        } else if (c < a) {
            return a;
        } else {
            return c;
        }
    }
}
