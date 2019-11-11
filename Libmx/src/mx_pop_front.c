#include "libmx.h"

void mx_pop_front(t_list **head)
{
    //validate node
    if (*head == NULL || head == NULL)
    {
        return;
    }
    //Node first
    if ((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
        return;
    }
    else
    {
        t_list *temp = (*head)->next; // select next node
        //validate
        if (!temp)
            return;
        free(*head);  // delate
        *head = temp; // value node
    }
}
