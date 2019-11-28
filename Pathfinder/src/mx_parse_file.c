#include "pathfinder.h"

char *mx_parse_file(char *file)
{
    char *filearr = mx_file_to_str(file);
    mx_validation(filearr);
    return filearr;
}
