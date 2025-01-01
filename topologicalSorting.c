#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Function to perform Topological Sort using Kahn's Algorithm
void topologicalSort(int n, int graph[n][n]) {
    int in_degree[n]; // Array to store the in-degree of each vertex
    int queue[MAX];    // Queue for vertices with in-degree 0
    int front = 0, rear = 0;
    int count = 0;

    // Step 1: Calculate in-degree of all vertices
    for (int i = 0; i < n; i++) {
        in_degree[i] = 0;  // Initialize in-degree as 0
        for (int j = 0; j < n; j++) {
            if (graph[j][i] == 1) {  // If there's an edge j -> i
                in_degree[i]++;
            }
        }
    }

    // Step 2: Add vertices with in-degree 0 to the queue
    for (int i = 0; i < n; i++) {
        if (in_degree[i] == 0) {
            queue[rear++] = i;
        }
    }

    // Step 3: Process the vertices in the queue
    printf("Topological Sort: ");
    while (front < rear) {
        int current = queue[front++]; // Dequeue a vertex
        printf("%d ", current);

        // Reduce the in-degree of the neighbors
        for (int i = 0; i < n; i++) {
            if (graph[current][i] == 1) {  // If there's an edge current -> i
                in_degree[i]--;
                if (in_degree[i] == 0) {
                    queue[rear++] = i;
                }
            }
        }

        count++;
    }

    // If count is not equal to n, there is a cycle (not all vertices are processed)
    if (count != n) {
        printf("\nGraph has a cycle, topological sort is not possible.");
    } else {
        printf("\nTopological sort completed.");
    }
}

// Main function to test the topological sort
int main() {
    int n, m;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    int graph[n][n];
    // Initialize the graph with 0s
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            graph[i][j] = 0;
        }
    }

    // Input the number of edges
    printf("Enter number of edges: ");
    scanf("%d", &m);

    printf("Enter edges (u v) where u -> v: \n");
    for (int i = 0; i < m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        graph[u][v] = 1; // Mark edge u -> v
    }

    // Perform topological sort
    topologicalSort(n, graph);

    return 0;
}

