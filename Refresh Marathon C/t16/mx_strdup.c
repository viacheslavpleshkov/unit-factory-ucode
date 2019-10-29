#include <stdlib.h>

char *mx_strcpy(char *dst, const char *src);

int mx_strlen(const char *s);

char *mx_strnew(const int size) ;

char *mx_strdup(const char *str){
	char *res = mx_strnew(mx_strlen(str));

	mx_strcpy(res, str);
	return res;
}
