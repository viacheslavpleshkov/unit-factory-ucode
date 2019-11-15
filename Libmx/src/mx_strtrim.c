#include <stdio.h>
#include <stdlib.h>

int mx_strlen(const char *s)
{
    int i = 0;
    while (s[i])
    {
        i++;
    }
    return i;
}


int mx_is_space(char c) {
	if (c == 32 || c == '\t' || c == '\n' 
		|| c == '\v' || c == '\r' || c == '\f')
		return 1;
	return 0;
}

char *mx_strnew(const int size)
{

    if (size == NULL)
    {
        return NULL;
    }
    char *memory = (char *)malloc((size + 1) * sizeof(char));

    if (!memory)
    {
        return NULL;
    }
    for (int i = 0; i < size; i++)
    {
        memory[i] = '\0';
    }
    return memory;
}

int mx_strtrim(const char *str) {
    int i = 0, len = mx_strlen(str);
    //колічество елементов
    while (mx_is_space(str[i]))
    {
        i++;
    }

    char *new = mx_strnew(len -i)
    
    return i;
}

int main() {
    char name[] = "\f My name... is Neo \t\n ";
    printf("%i",mx_strtrim(name));
    return 0;
}
