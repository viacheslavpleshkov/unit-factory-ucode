#include <stdbool.h>

bool mx_is_space(char c);
bool mx_isdigit(int c);

int mx_atoi(const char *str)
{
    int i = 0;
    int n = 0;
    int s = 1;

    while (!mx_isdigit(str[i]))
    {
        if (!mx_isspace(str[i]) && str[i] != '-' && str[i] != '+')
            return 0;
        i++;
    }
    if (str[i - 1] == '-')
    {
        s = -s;
    }
    while (mx_isdigit(str[i]))
    {
        n = ((n * 10) + (str[i] - '0'));
        i++;
    }
    if (s < 0)
    {
        n = -n;
    }

    return n;
}
