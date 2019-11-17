#include "libmx.h"

char *mx_file_to_str(const char *file)
{
    int fd = open(file, O_RDONLY);
    int len = 0;
    char buf;
    char *str;
    if (fd < 0)
    {
        return NULL;
    }
    else if (read(fd, (void *)0, 0) < 0)
    {
        return NULL;
    }
    else
    {
        //counter string
        while (read(fd, &buf, 1))
        {
            len++;
        }
        close(fd);
        fd = open(file, O_RDONLY);
        str = mx_strnew(len);
        for (int i = 0; read(fd, &buf, 1); i++)
            str[i] = buf;
        close(fd);
        return str;
    }
    return NULL;
}
