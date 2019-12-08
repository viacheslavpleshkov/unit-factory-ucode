#include "pathfinder.h"

struct s_graph *mx_graph_create(int vertices)
{
    struct s_graph *graph = malloc(sizeof(struct s_graph));
    graph->numVertices = vertices;

    graph->adjLists = malloc(vertices * sizeof(struct node *));

    graph->visited = malloc(vertices * sizeof(int));

    int i;
    for (i = 0; i < vertices; i++)
    {
        graph->adjLists[i] = NULL;
        graph->visited[i] = 0;
    }
    return graph;
}
