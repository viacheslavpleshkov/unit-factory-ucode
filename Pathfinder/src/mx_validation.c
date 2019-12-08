#include "pathfinder.h"

void mx_validation(int argc, char *argv[])
{
    char *file = NULL;
    mx_validation_cmd_args(argc);
    mx_validation_file_dexist(argv[1]);

    file = mx_file_to_str(argv[1]);
    char **filearr = mx_strsplit(file, '\n');
    mx_validation_first_line(filearr);
    // // mx_validation_num_islnd(filearr);
    mx_validation_check_line(filearr);
}
