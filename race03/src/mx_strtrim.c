#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
bool mx_isspace(char c);
void mx_strdel(char **str);
int mx_strlen(const char *s);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);

char *mx_strtrim(const char *str) {
    int len = mx_strlen(str);
    int start = 0;
    int last = 0;
    char *result;

    if (!str)
        return NULL;
        for (int i = 0; mx_isspace(str[i]); ++i) {
            start++;
        }
        for(int j = len - 1 ; mx_isspace(str[j]); --j) {
            last++;
        }
        result = mx_strnew(len - start - last);
        mx_strncpy(result, str + start , len - start - last);
        return result;
}
