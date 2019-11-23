#include "list.h"

void mx_clear_list(t_list **list)
{
	t_list *tmp = *list;
	while (tmp->next)
	{
		if (tmp->next->next)
		{
			free(tmp->next);
			tmp->next = NULL;
			tmp = (*list);
			continue;
		}
		if (tmp->next)
		{
			tmp = tmp->next;
		}
	}
	(*list)->next = 0;
	*list = NULL;
	free(tmp);
}
