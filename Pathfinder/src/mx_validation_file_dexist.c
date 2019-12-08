#include "pathfinder.h"

void mx_validation_file_dexist(char *argv)
{
    int fd;
    //Validation
    fd = open(argv, O_RDONLY);
    if (read(fd, 0, 0) < 0)
        mx_printerr_pf(FILE_DEXIST, argv);
}
