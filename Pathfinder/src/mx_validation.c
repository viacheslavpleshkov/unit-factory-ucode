#include "pathfinder.h"

void mx_validation(char *array) {
    char **filearr = mx_strsplit(array, '\n');
    mx_validation_first_line(filearr);
    mx_validation_num_islnd(filearr);
    mx_validation_check_line(filearr);
}
