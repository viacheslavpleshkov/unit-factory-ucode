#include <unistd.h>

int mx_strlen(const char *s);

void mx_printchar(const char *s)
{
    write(1, s, mx_strlen(s));
}
