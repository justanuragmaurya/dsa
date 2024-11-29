#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void bfs(int graph[100][100], int V, int src) {
    // Queue for BFS
    int queue[100];
    
    // Status array to track visited nodes
    int status[100] = {0};
    // Front and rear for queue management
    int front = -1, rear = -1;
    
    // Enqueue source vertex
    queue[++rear] = src;
    status[src] = 1;
    front = 0;
    
    // Temporary array to store BFS order
    int bfs_order[100];
    int order_index = 0;
    
    while (front <= rear) {
        // Dequeue vertex
        int current = queue[front++];
        bfs_order[order_index++] = current;
        
        // Check all adjacent vertices
        for (int neighbor = 0; neighbor < V; neighbor++) {
            if (graph[current][neighbor] == 1 && status[neighbor] == 0) {
                queue[++rear] = neighbor;
                status[neighbor] = 1;
            }
        }
    }
    
    // Print BFS order
    for (int i = 0; i < order_index; i++) {
        cout << bfs_order[i] << " ";
    }
}

int main() {
    // Graph represented as adjacency matrix
    int graph[100][100] = {0};
    
    // Read number of vertices and edges
    int V, E;
    cin >> V >> E;
    
    // Read and populate edges
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;  // Undirected graph
    }
    
    // Perform BFS starting from vertex 0
    bfs(graph, V, 0);
    
    return 0;
}