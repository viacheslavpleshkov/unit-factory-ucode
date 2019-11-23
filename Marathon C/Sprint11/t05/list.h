#ifndef list_h
#define list_h

#include <stdlib.h>

typedef struct s_list {
    void *data;
    struct s_list *next;
} t_list;


int mx_list_size(t_list *list);

#endif
