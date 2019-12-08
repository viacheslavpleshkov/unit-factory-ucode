#include "pathfinder.h"
#include <stdio.h>

static void graph_main()
{
    struct s_graph *graph = mx_graph_create(4);
    mx_graph_add_edge(graph, 0, 1);
    mx_graph_add_edge(graph, 0, 2);
    mx_graph_add_edge(graph, 1, 2);
    mx_graph_add_edge(graph, 2, 3);

    mx_graph_print(graph);
    mx_graph_algorithm(graph, 2);
}

int main(int argc, char *argv[])
{
    mx_validation(argc, argv);
    graph_main();
}
