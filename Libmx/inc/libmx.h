#ifndef libmx_h
#define libmx_h

#include <unistd.h>
#include <wchar.h>

void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_print_unicode(wchar_t c);
void mx_printstr(const char *s);
void mx_print_strarr(char **arr, const char *delim);
void mx_printint(int n);
double mx_pow(double n, unsigned int pow);

#endif
