#include "list.h"

int mx_list_size(t_list *list)
{
    int i = 0;
    
    if (list)
    {
        t_list *tmp = list;
        while (tmp != NULL)
        {
            i++;
            tmp = tmp->next;
        }
    }

    return i;
}
