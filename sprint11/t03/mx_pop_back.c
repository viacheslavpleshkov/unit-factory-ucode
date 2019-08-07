#include "list.h"

void mx_pop_back(t_list **list) {
    t_list *temp = *list;

    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}
