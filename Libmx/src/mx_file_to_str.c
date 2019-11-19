#include "libmx.h"
#include <stdio.h>

char *mx_file_to_str(const char *file)
{
    int fd = open(file, O_RDONLY);
    int len = 0;
    char buf;
    char *str;
    if (fd < 0)
    {
        close(fd);
        return NULL;
    }
    else if (read(fd, (void *)0, 0) < 0)
    {
        close(fd);
        return NULL;
    }
    else if (!file)
    {
        close(fd);
        return NULL;
    }
    else
    {
        while (read(fd, &buf, 1))
        {
            len++;
        }
        close(fd);
        if (len == 0)
        {
            return NULL;
        }
        fd = open(file, O_RDONLY);
        str = mx_strnew(len);
        for (int i = 0; read(fd, &buf, 1); i++)
            str[i] = buf;
        close(fd);
        return str;
    }
}
