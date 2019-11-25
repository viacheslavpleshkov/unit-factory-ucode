#ifndef PATHFINDER_H
#define PATHFINDER_H

#include "libmx.h"

typedef enum e_error
{
    INVLD_CMD_ARGS,
    FILE_DEXIST,
    FILE_EMPTY,
    INVLD_FRST_LINE,
    INVLD_LINE,
    INVLD_NUM_ISLDS
} t_error;

void mx_printerr_pf(t_error err, const char *s);
char **mx_parse_file(char *file);
int main(int argc, char *argv[]);
#endif
