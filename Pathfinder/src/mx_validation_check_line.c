#include "pathfinder.h"

void mx_validation_check_line(char **array)
{
    int i = 1;
    int j = 0;
    int space = 0;
    int delimetr = 0;
    bool status = false;
    bool numbe = false;
    while (array[i] != NULL)
    {
        space = 0;
        delimetr = 0;
        j = 0;
        status = false;
        while (array[i][j])
        {
            if (array[i][j] == '-')
                space++;
            if (array[i][j] == ',')
            {
                delimetr++;
                status = true;
                j++;
            }
            if (status == true)
            {
                if (mx_isdigit(array[i][j]) == false)
                {
                    numbe = true;
                }
            }

            j++;
        }
        if (space > 1 || delimetr > 1 || array[i][0] == '-' || numbe == true)
            mx_printerr_pf(INVLD_LINE, mx_itoa(i));
        i++;
    }
}
