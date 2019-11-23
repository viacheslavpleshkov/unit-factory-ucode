#include <stdlib.h>

char *mx_strdup(const char *str);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strcat(char *s1, const char *s2);
char *mx_strjoin(char const *s1, char const *s2);
void mx_strdel(char **str);

char *mx_concat_words(char **words)
{
    int len = 0;
    char *str;
    if (!words)
    {
        return NULL;
    }
    for (int i = 0; words[i] != NULL; i++)
    {
        len += mx_strlen(words[i]);
        if (words[i + 1] != NULL)
            len++;
    }
    str = mx_strnew(len);
    for (int j = 0; words[j] != NULL; j++)
    {
        mx_strcat(str, words[j]);
        if (words[j + 1] != NULL)
            mx_strcat(str, " ");
    }
    return str;
}
