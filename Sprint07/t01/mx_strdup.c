#include <stdlib.h>

void mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strdup(const char *str){
    int size = mx_strlen(str);
    char* new = mx_strnew(size);
    if (new == NULL) {
        return NULL;
    }
    mx_strcpy(new, str);
    return new;
}
