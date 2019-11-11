#include "libmx.h"

void mx_push_front(t_list **list, void *data)
{
    if (*list == NULL || list == NULL)
    {
        return;
    }
    t_list *new_node = mx_create_node(data);
    t_list *temp = NULL;

    temp = *list;
    *list = new_node;
    new_node->next = temp;
}
