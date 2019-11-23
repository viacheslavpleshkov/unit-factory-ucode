#ifndef duplicate_h
#define duplicate_h

#include <stdbool.h>

typedef struct s_intarr
{
int *arr;
int size;
} t_intarr;

char *mx_nbr_to_hex(unsigned long nbr);
char *mx_strnew(const int size);

#endif