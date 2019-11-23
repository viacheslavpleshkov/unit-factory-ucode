#include <stdio.h>

int mx_strlen(const char *s);
void mx_printchar(char c);
char *mx_strchr(const char *s, int c);
void mx_printstr(const char *s);

int main(int argc, char *argv[])
{
    if (argc > 0)
    {
        while (mx_strchr(argv[0], '/'))
        {
            printf("%s", argv[0]++);
        }
        mx_printstr(argv[0]);
        mx_printchar('\n');
    }

    return 0;
}
