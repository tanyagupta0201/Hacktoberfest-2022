/*Author's name: Martina John
 Date modified: 01-10-2022*/

#include <stdio.h>
#define MAX 10
#define INF 999

void dijkstra(int G[MAX][MAX], int n, int startnode)
{
    int cost[MAX][MAX], distance[MAX], pred[MAX];
    int visited[MAX], count, mindistance, nextnode, i, j;
    // pred[] stores the predecessor of each node
    // count gives the number of nodes seen so far
    // create the cost matrix
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            if (G[i][j] == 0)
                cost[i][j] = INF;
            else
                cost[i][j] = G[i][j];
        }
    // initialize pred[],distance[] and visited[]
    for (i = 0; i < n; i++)
    {
        distance[i] = cost[startnode][i];
        pred[i] = startnode;
        visited[i] = 0;
    }
    distance[startnode] = 0;
    visited[startnode] = 1;
    count = 1;
    while (count < n - 1)
    {
        mindistance = INF;
        // nextnode gives the node at minimum distance
        for (i = 0; i < n; i++)
            if (distance[i] < mindistance && !visited[i])
            {
                mindistance = distance[i];
                nextnode = i;
            }
        // check if a better path exists through nextnode
        visited[nextnode] = 1;
        for (i = 0; i < n; i++)
            if (!visited[i])
                if (mindistance + cost[nextnode][i] < distance[i])
                {
                    distance[i] = mindistance + cost[nextnode][i];
                    pred[i] = nextnode;
                }
        count++;
    }

    // print the path and distance of each node
    for (i = 0; i < n; i++)
        if (i != startnode)
        {
            printf("\nDistance of node%d=%d", i, distance[i]);
            printf("\nPath=%d", i);
            j = i;
            do
            {
                j = pred[j];
                printf("<-%d", j);
            } while (j != startnode);
        }
}
int main()
{
    int edge, s, d, graph[10][10], num,start,weight;
    printf("Enter the number of vertices:");
    scanf("%d", &num);
    printf("Enter the number of edges:");
    scanf("%d", &edge);
    for (int i = 0; i < edge; i++)
    {
        printf("Enter the source:");
        scanf("%d", &s);
        printf("Enter the destination:");
        scanf("%d", &d);
        printf("Enter the weight:");
        scanf("%d", &weight);
        graph[s][d]=weight;
        graph[d][s]=weight;
    }
    printf("Enter the value of the start node:");
    scanf("%d",&start);
    dijkstra(graph,num,start);
    return 0;
}
