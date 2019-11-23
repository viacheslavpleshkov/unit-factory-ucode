#include <unistd.h>

void mx_printchar(char c);
//space
int space(int n)
{
    for (int i = 0; i < n; ++i)
    {
        mx_printchar(' ');
    }
}
void mx_cube(int n)
{
    if (n > 0)
    {
        for (int i = 0; i < n; ++i)
        {
            space(n / 2 + 1);
        }
    }
}

int main()
{
    mx_cube(3);
    return 0;
}
