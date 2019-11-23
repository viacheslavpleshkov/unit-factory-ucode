#include "list.h"

void mx_push_back(t_list **list, void *data)
{
    t_list *back_list = mx_create_node(data);

    if (list == NULL || *list == NULL)
    {
        *list = back_list;
    }
    else
    {
        t_list *temp = *list;
        
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = back_list;
    }
}
