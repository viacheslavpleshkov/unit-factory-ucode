#include <unistd.h>

void mx_printchar(char c);

static void mx_printnum(int num) {
    if(num > 9)
        mx_printnum(num / 10);
    mx_printchar(num % 10 + 48);
}

void mx_printint(int num) {
    if (num == -2147483648) {
        write(1, "-2147483648", 11);
        return;
    }
    if(num < 0) {
        mx_printchar('-');
        num *= -1;
    }
    mx_printnum(num);
}
