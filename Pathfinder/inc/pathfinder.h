#ifndef PATHFINDER_H
#define PATHFINDER_H

#include "libmx.h"
#include <stdio.h>
#include <ctype.h>
typedef enum e_error
{
    INVLD_CMD_ARGS,
    FILE_DEXIST,
    FILE_EMPTY,
    INVLD_FRST_LINE,
    INVLD_LINE,
    INVLD_NUM_ISLDS
} t_error;

char **mx_parse_file(char *file);
bool mx_isnumber(char *s);
int mx_atoi(const char *str);
void mx_printerr_pf(t_error err, const char *s);
void mx_validation(char **aray);
void mx_validation_first_line(char **array);
void mx_validation_num_islnd(char **array);
int main(int argc, char *argv[]);

#endif
