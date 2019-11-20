#include "libmx.h"

t_list *mx_create_node(void *data)
{
    //Validate data
    if (!data)
        return NULL;
    //Memory
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    //Validate new_node
    if (!new_node)
        return NULL;
    //struct data
    new_node->data = data;
    //struct next
    new_node->next = NULL;
    //return new
    return new_node;
}
