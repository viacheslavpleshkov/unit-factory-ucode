#include "pathfinder.h"

void mx_graph_algorithm(struct s_graph *graph, int vertex)
{
    struct node *adjList = graph->adjLists[vertex];
    struct node *temp = adjList;

    graph->visited[vertex] = 1;
    // printf("Visited %d \n", vertex);

    while (temp != NULL)
    {
        int connectedVertex = temp->vertex;

        if (graph->visited[connectedVertex] == 0)
        {
            mx_graph_algorithm(graph, connectedVertex);
        }
        temp = temp->next;
    }
}
