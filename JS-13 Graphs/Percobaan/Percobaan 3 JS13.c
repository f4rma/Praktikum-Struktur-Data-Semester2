/*
    Nama  : Raditya Putra Farma
    Nim   : 23343050
    Prodi : Informatika
*/
#include<stdio.h> 

void DFS(int); 
int G[10][10], visited[10], n; // n is the number of vertices and the graph is stored in array G[10][10] 

int main() { 
    int i, j; 
    printf("Enter number of vertices:"); 
    scanf("%d", &n); 

    // Read the adjacency matrix 
    printf("\nEnter adjacency matrix of the graph:"); 
    for (i = 0; i < n; i++) 
        for (j = 0; j < n; j++) 
            scanf("%d", &G[i][j]); 

    // Initialize visited array to zero 
    for (i = 0; i < n; i++) 
        visited[i] = 0; 

    // Start DFS from vertex 0
    DFS(0); 

    return 0; 
} 

void DFS(int i) { 
    int j; 
    printf("\n%d", i); 
    visited[i] = 1; 

    for (j = 0; j < n; j++) 
        if (!visited[j] && G[i][j] == 1) 
            DFS(j); 
}
