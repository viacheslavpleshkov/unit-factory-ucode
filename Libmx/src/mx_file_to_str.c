#include "libmx.h"

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
