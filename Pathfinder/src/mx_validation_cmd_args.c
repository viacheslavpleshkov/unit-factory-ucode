#include "pathfinder.h"

void mx_validation_cmd_args(int argc)
{
    if (argc != 2){
        mx_printerr_pf(INVLD_CMD_ARGS, NULL);
    }
}
