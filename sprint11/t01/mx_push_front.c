#include "list.h"

void mx_push_front(t_list **list, void *data) {

    t_list *firstlist  = mx_create_node(data);
    
    firstlist->next = *list;

    *list = firstlist;
}

int main() {
	t_list *list0 = mx_create_node("list 0");
	t_list *list1 = mx_create_node("list 1");

	list0->next = list1;
	
	t_list **list = &list0;

    mx_push_front(list,"Na hui");

	printf("%s", (*list)->data);
	printf("%s", " ");
    printf("%s\n", (*list)->next->next->data);
}
