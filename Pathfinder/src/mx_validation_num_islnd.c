#include "pathfinder.h"

void mx_validation_num_islnd(char **array)
{
    int leng = mx_arrlen(array) -1;

    printf("%i",leng);
    if (mx_atoi(array[0]) != leng)
        mx_printerr_pf(INVLD_NUM_ISLDS, NULL);
}
