#ifndef PATHFINDER_H
#define PATHFINDER_H

#include "libmx.h"
#include <stdio.h>
#include <ctype.h>

//Error
typedef enum e_error
{
    INVLD_CMD_ARGS,
    FILE_DEXIST,
    FILE_EMPTY,
    INVLD_FRST_LINE,
    INVLD_LINE,
    INVLD_NUM_ISLDS
} t_error;
//Structs
struct node
{
    int vertex;
    struct node *next;
};

struct node *createNode(int v);

struct s_graph
{
    int numVertices;
    int *visited;
    struct node **adjLists; // we need int** to store a two dimensional array. Similary, we need struct node** to store an array of Linked lists
};

//Validation
void mx_printerr_pf(t_error err, const char *s);
void mx_validation(int argc, char *argv[]);
void mx_validation_cmd_args(int argc);
void mx_validation_file_dexist(char *argv);
void mx_validation_first_line(char **array);
void mx_validation_num_islnd(char **array);
void mx_validation_check_line(char **array);
//Graph
char *mx_graph_parse(char *file);
struct s_graph *mx_graph_create(int);
void mx_graph_add_edge(struct s_graph *, int, int);
void mx_graph_print(struct s_graph *);
void mx_graph_algorithm(struct s_graph *, int);
//Main
int main(int argc, char *argv[]);
#endif
