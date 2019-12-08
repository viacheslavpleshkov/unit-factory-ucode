#include "pathfinder.h"

void mx_graph_print(struct s_graph *graph)
{
    int v;
    for (v = 0; v < graph->numVertices; v++)
    {
        struct node *temp = graph->adjLists[v];
        printf("========================================");
        printf("\n Adjacency list of vertex %d\n ", v);
        while (temp)
        {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }
        printf("+");
        printf("\n");
        printf("========================================");
        printf("\n");
    }
}
