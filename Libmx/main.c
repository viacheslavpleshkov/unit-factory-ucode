#include "./inc/libmx.h"

int main()
{
    char s[] = "*Good bye,**Mr.*Anderson.****";
    char **arr = mx_strsplit(s, '*');
    printf("%s", arr[1]);
}
