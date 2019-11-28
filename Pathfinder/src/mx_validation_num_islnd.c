#include "pathfinder.h"

void mx_validation_num_islnd(char **array)
{
    size_t leng = mx_arrlen(array);
    printf("array size: %zu \n", leng);
    for (size_t i = 0; i < leng; i++)
    {
        printf("%s \n", array[i]);
    }
    exit(1);
    // if (mx_atoi(array[0]) != leng)
    //     mx_printerr_pf(INVLD_NUM_ISLDS, NULL);
}
