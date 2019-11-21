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
