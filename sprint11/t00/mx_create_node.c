#include "list.h"

t_list *mx_create_node(void *data) {
	
    t_list *new = malloc(sizeof(t_list));

    new->data = data;
    new->next = NULL;

    return new;
}
