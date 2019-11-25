#include "pathfinder.h"

void mx_printerr_pf(t_error err, const char *s)
{
    switch (err)
    {
    case INVLD_CMD_ARGS:
        mx_printerr("usage: ./pathfinder [filename]");
        break;
    case FILE_DEXIST:
        mx_printerr("error: file ");
        mx_printerr(s);
        mx_printerr(" doesn\'t exist");
        break;
    case FILE_EMPTY:
        mx_printerr("error: file ");
        mx_printerr(s);
        mx_printerr(" is empty");
        break;
    case INVLD_FRST_LINE:
        mx_printerr("error: line 1 isn\'t valid");
        break;
    case INVLD_LINE:
        mx_printerr("error: line ");
        mx_printerr(s);
        mx_printerr(" isn\'t valid");
        break;
    case INVLD_NUM_ISLDS:
        mx_printerr("error: invalid number of islands");
        break;
    }
    mx_printerr("\n");
    exit(1);
}
