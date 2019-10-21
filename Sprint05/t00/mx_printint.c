#include <unistd.h>

void mx_printchar(char c);

void mx_printint(int n) {
    int reverse = 0;
    int end = n;
if (n < 0) {
    mx_printchar('-');
    n = n * -1;
}
while (n != 0) {
    reverse = reverse * 10 + (n % 10); 
    n = n / 10;
}
while (reverse != 0) {
    mx_printchar(reverse % 10 + 48);
    reverse = (reverse - 1) / 10;
}
while (end % 10 == 0) {    
   mx_printchar ('0');
    end = end / 10;
}
}
