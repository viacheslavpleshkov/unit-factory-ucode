#include "list.h"

void mx_push_front(t_list **list, void *data) {
	//new
    t_list *first_list  = mx_create_node(data);
    //conect
    first_list->next = *list;
    //save
    *list = first_list;
}
