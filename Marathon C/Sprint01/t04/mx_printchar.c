#include <unistd.h>

void mx_printchar(char c)
{
    char *w = &c;

    write(1, w, 1);
}
