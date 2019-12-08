#include "pathfinder.h"

char **mx_file_to_arr(char *file)
{
    char *filearr = mx_file_to_str(file);
    char **array = mx_strsplit(filearr, '\n');
    return array;
}
