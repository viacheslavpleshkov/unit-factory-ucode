#include "./inc/libmx.h"

char **mx_strsplit(const char *s, char c)
{
    int max = 0;
    int min = 0;

    bool flag = true;
    int i = 0, j = 0;
    char **new = (char **)malloc(sizeof(char *) * (mx_count_words(s, c) + 1));

    while (s[i])
    {
        if ((s[i] == c) && (flag == true))
        {
            min = i;
            flag = false;
            continue;
        }
        if ((s[i] == c) && (flag == false))
        {
            max = i;
            flag = true;
            if (min + 1 == max)
            {
                continue;
            }

            new[j] = mx_strndup(&s[min + 1], max - min - 1);

            j++;
        }
        i++;
    }
    new[j] = NULL;
    return new;
}

int main()
{
    char s[] = "*Good bye,**Mr.*Anderson.****";
    char **arr = mx_strsplit(s, '*');
    printf("%s", arr[1]);
}
