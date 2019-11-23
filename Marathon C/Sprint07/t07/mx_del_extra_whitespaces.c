#include <stdlib.h>
#include <stdbool.h>

char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);
char *mx_strtrim(const char *str);
bool mx_is_space(char c);
void mx_strdel(char **str);

char *mx_del_extra_whitespaces(const char *str)
{
    if (!str)
    {
        return NULL;
    }
    else
    {
        char *memory = mx_strnew(mx_strlen(str));
        char *temp = NULL;
        int i = 0;
        int j = 0;

        while (str[i])
        {
            if (!(mx_is_space(str[i])))
            {
                memory[j] = str[i];
                j++;
            }
            if (!(mx_is_space(str[i])) && mx_is_space(str[i + 1]))
            {
                memory[j] = ' ';
                j++;
            }

            i++;
        }
        temp = mx_strtrim(memory);
        free(memory);

        return temp;
    }
}
