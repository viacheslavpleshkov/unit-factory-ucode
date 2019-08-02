#include "mx_printchar.c"

void mx_printint(int n) {
   int reverse = 0;
   int container = n;
   if (n < 0) {
       n *= -1;
   }
   while (n != 0) {
       reverse = (reverse * 10) + n % 10;
       n = n / 10;
   }
   while (reverse != 0) {
       mx_printchar(reverse % 10 + 48);
       reverse = (reverse - (reverse % 10)) / 10;
   }
   while (container % 10 == 0) {
       mx_printchar('0');
       container = container / 10;
   }
}
