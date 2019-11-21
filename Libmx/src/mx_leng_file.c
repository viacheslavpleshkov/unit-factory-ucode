#include "libmx.h"

int mx_leng_file(const char *file)
{
    char buf;
    int len = 0;
    int fd = open(file, O_RDONLY);
    while (read(fd, &buf, 1))
    {
        len++;
    }
    close(fd);
    return len;
}
