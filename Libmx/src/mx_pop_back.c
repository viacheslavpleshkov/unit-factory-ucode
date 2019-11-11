#include "libmx.h"

void mx_pop_back(t_list **head)
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
        t_list *temp = *head;
        if (!temp)
            return;
        while (temp && temp->next->next != NULL)
            temp = temp->next;
        free(temp->next);
        temp->next = NULL;
    }
}