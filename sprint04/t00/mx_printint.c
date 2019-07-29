#include <unistd.h>
void mx_printchar(char c);

void mx_printint(int n) {
    int count = 0;
    int num = n;
    int degree = 1;

    if(n < 0) {
        mx_printchar('-');
        n = n * (-1);
        num = n;
    }
    if(n == 0) {
        mx_printchar('0');
    }
    while(n % 10 != 0) {
        n /= 10;
        ++count;
    }
    for(int i = 1; i < count; ++i) {
        degree = degree * 10;
    }
    while(num > 0) {
        int dig = num / degree + 48;
        mx_printchar(dig);
        num %= degree;
        degree = degree / 10;
    }
}