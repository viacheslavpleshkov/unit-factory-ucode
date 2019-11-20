#include <stdlib.h>

char *mx_strnew(const int size) {
	char* str;

	str = (char *)malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return NULL;
	for (int i = 0; i <= size; i++){
		str[i] = '\0';
	}
	return str;
}