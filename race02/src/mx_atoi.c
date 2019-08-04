#include <stdbool.h>
bool mx_isspace(char c);
bool mx_isdigit(int c);

int mx_atoi(const char *str) {
    int i = - 1;
    int sum = 0;
    int sign = 1;

    while (str[++i]) {
    if (!mx_isspace(str[i])) {
        if(str[i] == '-') {
        sign = -1;
        break;
        }
        else if(str[i] == '+')
        break;
        i--;
        break;
    }
    }
    while (str[++i]) {
    if (mx_isdigit(str[i]))
        sum = sum * 10 + str [i] - '0';
    if (!mx_isdigit(str[i]))
        return sum * sign;
    }
    return sum * sign;
}
