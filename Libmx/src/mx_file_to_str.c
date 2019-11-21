#include "libmx.h"

int mx_validation_file(const char *file)
{
    int fd = open(file, O_RDONLY);

    if (fd < 0)
    {
        close(fd);
        return 0;
    }
    else if (read(fd, (void *)0, 0) < 0)
    {
        close(fd);
        return 0;
    }
    else if (!file)
    {
        close(fd);
        return 0;
    }
    return 1;
}

static int mx_leng_file(const char *file)
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

char *mx_file_to_str(const char *file)
{
    char buf;
    char *str;
    if (!mx_validation_file(file))
    {
        return NULL;
    }
    int size = mx_leng_file(file);
    if (!size)
    {
        return NULL;
    }

    char fd = open(file, O_RDONLY);
    str = mx_strnew(size);

    for (int i = 0; read(fd, &buf, 1); i++)
        str[i] = buf;
    close(fd);

    return str;
}
