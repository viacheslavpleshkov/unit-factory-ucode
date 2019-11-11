#include "libmx.h"

int mx_list_size(t_list *list)
{
    int counter = 0;
    t_list *node = list;

    if (list == NULL)
    {
        return 0;
    }

    while (node->next != NULL)
    {
        counter++;
        node = node->next;
    }
    return counter;
}
