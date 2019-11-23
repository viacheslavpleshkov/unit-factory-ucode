#include <stdbool.h>

int mx_strcmp(const char *s1, const char *s2);
void mx_printstr(const char *s);
void mx_printchar(char c);
int mx_strlen(const char *s);

void mx_sort_arr_string(char **arr, int size)
{
    char *zapas;
    bool noSwap;
    if (size > 1)
    {
        noSwap = 1;
        for (int i = 0; i <= size - 1; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (mx_strcmp(arr[j], arr[j + 1]) > 0)
                {
                    zapas = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = zapas;
                    noSwap = 0;
                }
            }
        }
        if (noSwap == 1)
            return;
    }
}

int main(int argc, char *argv[])
{
    mx_sort_arr_string(argv, argc);
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            mx_printstr(argv[i]);
            mx_printchar('\n');
        }
    }
}
