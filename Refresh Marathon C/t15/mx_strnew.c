#include <stdlib.h>

char *mx_strnew(const int size) {
    char *res = (char*)malloc(size + 1);
    
    if (res == NULL) {
    	return NULL;
    }

    for (int i = 0; i < size; ++i)
    {
    	res[i] = '\0';
    }
    res[size] = '\0'; 

	return res;
}
