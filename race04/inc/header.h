#ifndef HEADER_H
#define HEADER_H

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

void mx_printchar(char c);
void mx_printint(int n);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);
void mx_strdel(char **str);
int mx_strlen(const char *s);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);
char *mx_strtrim(const char *str);
void mx_printerr(const char *s);
int mx_atoi(const char *str);
int **matrix (char *res, int *ryad, int *stovb);
char *mx_file_to_str(const char *filename);
int mx_matrix_max(int **grid,int ax, int ay,int He, int Wi);
bool mx_algorith_lee(int **grid,int ax, int ay, int bx, int by,int He, int Wi, int *len,int *px,int *py);

#endif
