#include "list.h"

t_list *mx_create_node(void *data) {
	//memory
    t_list *new = malloc(sizeof(t_list));
    //struct data
    new->data = data;
    //struct next
    new->next = NULL;
    //return new
    return new;
}
