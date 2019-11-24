#include "pathfinder.h"

#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        mx_printerr("usage: ./pathfinder [filename]\n");
        return 0;
    }
    // if (argv[1] != NULL || mx_file_to_str(argv[1]) == NULL)
    // {
    //     mx_printerr("error: file ");
    //     mx_printerr(argv[1]);
    //     mx_printerr(" doesn't exist\n");
    //     return 0;
    // }
    char *arr = mx_file_to_str(argv[1]);
    printf("%s", arr);
    
    return 0;
}
