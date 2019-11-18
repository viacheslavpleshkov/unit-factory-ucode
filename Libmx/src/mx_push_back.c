#include "libmx.h"

void mx_push_back(t_list **list, void *data)
{
    if (!list || !data)
    {
        return;
    }
    //new
    t_list *back_list = mx_create_node(data);
    if (!back_list)
    {
        return;
    }
    t_list *temp = *list;
    //check when this array will NULL
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    //temp = Null = back_list
    temp->next = back_list;
}
