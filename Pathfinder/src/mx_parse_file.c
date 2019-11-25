#include "pathfinder.h"

char **mx_parse_file(char *file)
{
    char **filearr = mx_strsplit(mx_file_to_str(file), '\n');
    return filearr;
}
