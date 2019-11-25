#include "pathfinder.h"

#include <stdio.h>

int main(int argc, char *argv[])
{
    int fd;
    char **arr = NULL;

    if (argc != 2)
        mx_printerr_pf(INVLD_CMD_ARGS, NULL);

    fd = open(argv[1], O_RDONLY);
    if (read(fd, 0, 0) < 0)
        mx_printerr_pf(FILE_DEXIST, argv[1]);

    arr = mx_parse_file(argv[1]);
    mx_print_strarr(arr, "\n");
    return 0;
}
