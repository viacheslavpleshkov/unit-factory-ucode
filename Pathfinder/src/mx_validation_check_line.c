#include "pathfinder.h"

void mx_validation_check_line(char **array)
{
    int j = 0;
    int space = 0;
    int delimetr = 0;
    bool status = false;
    bool number = false;
    for (int i = 1; array[i] != NULL; i++)
    {
        space = 0;
        delimetr = 0;
        j = 0;
        status = false;
        for (int j = 0; array[i][j] != '\0'; j++)
        {
            if (array[i][j] == '-')
                space++;
            if (array[i][j] == ',')
            {
                delimetr++;
                status = true;
                j++;
            }
            if ((status == true) && (mx_isdigit(array[i][j]) == false))
                number = true;

        }
        if (space > 1 || delimetr > 1 || array[i][0] == '-' || number == true)
            mx_printerr_pf(INVLD_LINE, mx_itoa(i));
    }
}
