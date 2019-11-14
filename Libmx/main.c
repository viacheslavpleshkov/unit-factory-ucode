#include "./inc/libmx.h"
#include <stdio.h>
int main () {

printf (" mx_printchar ");
mx_printchar('s');
printf ("\n");

printf (" mx_print_unicode ");
mx_print_unicode(0x1F603);
printf ("\n");

printf (" mx_printstr ");
mx_printstr("Hello world");
printf ("\n");

printf (" mx_print_strarr ");
char *arr[] = {"a","b","c","d", 0};
mx_print_strarr(arr, ",");
printf ("\n");

printf (" mx_printint 124");
mx_printint(124);
printf ("\n");

printf (" mx_pow 2^3 = 8");
mx_printint(mx_pow(2,3));
printf ("\n");

printf (" mx_pmx_sqrtow 9 = 3");
mx_printint(mx_sqrt(9));
printf ("\n");

printf("%i", mx_strlen("men"));
printf (" mx_strlen men");
printf ("\n");

char *str = "follow * the white rabbit";
printf("%i \n", mx_count_words(str, '*'));
}
