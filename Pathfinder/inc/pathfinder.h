#ifndef PATHFINDER_H
#define PATHFINDER_H

#include "libmx.h"
#include <stdio.h>
#include <ctype.h>
typedef enum e_error
{
    INVLD_CMD_ARGS,
    FILE_DEXIST,
    FILE_EMPTY,
    INVLD_FRST_LINE,
    INVLD_LINE,
    INVLD_NUM_ISLDS
} t_error;

typedef struct s_island t_island;
typedef struct s_link t_link;
typedef struct s_main t_main;
typedef struct s_path t_path;

struct s_island
{
    char *name;
    t_link *links; // linked islands list
    t_island *next;
    int index;
    t_path **paths;   // path to each island
};

struct s_link
{
    int weight; // weight between parent and linked islands
    t_island *linked_island;
    t_link *next;
};

struct s_main
{
    int fd;         // for read_line
    char *filename; // for read_line
    char *lineptr;  // for read_line
    int V;          // islands count
    t_island *islands;
};

struct s_path {
    t_link *path;
    t_path *next;
};

char *mx_parse_file(char *file);
bool mx_isnumber(char *s);
//Validation
void mx_printerr_pf(t_error err, const char *s);
void mx_validation(char *array);
void mx_validation_first_line(char **array);
void mx_validation_num_islnd(char **array);
void mx_validation_check_line(char **array);

int main(int argc, char *argv[]);

#endif
