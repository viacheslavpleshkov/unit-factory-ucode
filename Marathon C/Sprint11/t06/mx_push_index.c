#include "list.h"

void mx_push_index(t_list **list, void *data, int index)
{
    int count = 0;
    t_list *result = mx_create_node(data);
    t_list *tem = *list;
    int flag = 0;

    if (index <= 0)
    {
        mx_push_front(list, data);
    }
    while (tem != NULL)
    {
        if (count == index - 1)
        {
            result->next = tem->next;
            tem->next = result;
            flag = 1;
        }
        tem = tem->next;
        ++count;
    }
    if (flag != 1)
    {
        mx_push_back(list, data);
    }
}
