#include "libmx.h"

void mx_pop_front(t_list **head)
{
    if (*head == NULL)
    {
        return;
    }
    if ((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        t_list *temp = (*head)->next;
        free(*head);
        *head = temp;
    }
}
