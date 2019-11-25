#include "pathfinder.h"

void mx_validation_first_line(char **array)
{
    if (!mx_isnumber(array[0]))
        mx_printerr_pf(INVLD_FRST_LINE, NULL);
}
