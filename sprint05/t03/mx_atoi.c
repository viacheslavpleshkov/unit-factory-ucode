#include <stdbool.h>

bool mx_isdigit(int c);

int mx_atoi(const char *str) {
    long long sum = 0;
    int sign = 1;

    if (*str == '-' && mx_isdigit(*(str + 1)))
        sign = -1;
    if ((*str == '+' || *str == '-') && mx_isdigit(*(str + 1)))
        str++;

    while (*str && mx_isdigit(*str)) {
        sum = sum * 10 + (*str++ - 48);
        if (sum > 2147483647 && sign == 1)
            return 2147483647;
        if (sum > 2147483648 && sign == 0)
            return -2147483648;
    }

    if (*str)
        return 0;

    return sum * sign;
}
