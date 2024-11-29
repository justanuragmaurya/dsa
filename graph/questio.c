// #include <stdio.h>
// #define INF 1000000000
// #define MAXN 100

// // You are using GCC
// void initializeGraph(int graph[MAXN][MAXN], int n) {
//     //Type your code here
    
// }

// void readEdges(int graph[MAXN][MAXN], int m) {
//     //Type your code here
// }

// void floydWarshall(int graph[MAXN][MAXN], int n) {
//     //Type your code here
// }

// void printResult(int graph[MAXN][MAXN], int source, int sink) {
//     //Type your code here
// }

// int main() {
//     int n, m;
//     scanf("%d", &n);
//     scanf("%d", &m);

//     int graph[MAXN][MAXN];
//     initializeGraph(graph, n);
//     readEdges(graph, m);

//     int source, sink;
//     scanf("%d", &source);
//     scanf("%d", &sink);

//     floydWarshall(graph, n);
//     printResult(graph, source, sink);

//     return 0;
// }


#include <stdio.h>
#define INF 1000000000
#define MAXN 100

void initializeGraph(int graph[MAXN][MAXN], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                graph[i][j] = 0;  // Distance to self is 0
            } else {
                graph[i][j] = INF;  // Initialize all other distances as infinite
            }
        }
    }
}

void readEdges(int graph[MAXN][MAXN], int m) {
    int u, v, weight;
    for (int i = 0; i < m; i++) {
        scanf("%d %d %d", &u, &v, &weight);
        // Assuming 0-based indexing for vertices
        graph[u][v] = weight;  // Directed edge from u to v with given weight
    }
}

void floydWarshall(int graph[MAXN][MAXN], int n) {
    // k is the intermediate vertex
    for (int k = 0; k < n; k++) {
        // i is the source vertex
        for (int i = 0; i < n; i++) {
            // j is the destination vertex
            for (int j = 0; j < n; j++) {
                // If vertex k is on the shortest path from i to j,
                // then update the value of graph[i][j]
                if (graph[i][k] != INF && graph[k][j] != INF && 
                    graph[i][k] + graph[k][j] < graph[i][j]) {
                    graph[i][j] = graph[i][k] + graph[k][j];
                }
            }
        }
    }
}

void printResult(int graph[MAXN][MAXN], int source, int sink) {
    if (graph[source][sink] == INF) {
        printf("NO PATH\n");
    } else {
        printf("%d\n", graph[source][sink]);
    }
}

int main() {
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);

    int graph[MAXN][MAXN];
    initializeGraph(graph, n);
    readEdges(graph, m);

    int source, sink;
    scanf("%d", &source);
    scanf("%d", &sink);

    floydWarshall(graph, n);
    printResult(graph, source, sink);

    return 0;
}