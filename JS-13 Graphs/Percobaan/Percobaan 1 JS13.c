/*
    Nama  : Raditya Putra Farma
    Nim   : 23343050
    Prodi : Informatika
*/
#include <stdio.h> 
#include <stdlib.h> 

typedef struct node {
    int vertex;
    struct node* next;
} Node;

Node* createNode(int v);

typedef struct {
    int numVertices;
    int* visited;
    Node** adjLists;
} Graph;

Graph* createGraph(int vertices);
void addEdge(Graph* graph, int src, int dest);
void printGraph(Graph* graph);
void DFS(Graph* graph, int vertex);

int main() {
    Graph* graph = createGraph(4); 
    addEdge(graph, 0, 1); 
    addEdge(graph, 0, 2); 
    addEdge(graph, 1, 2); 
    addEdge(graph, 2, 3); 

    printGraph(graph); 

    printf("Starting DFS from vertex 2:\n");
    DFS(graph, 2); 

    return 0; 
}

void DFS(Graph* graph, int vertex) { 
    Node* adjList = graph->adjLists[vertex]; 
    Node* temp = adjList; 

    graph->visited[vertex] = 1; 
    printf("Visited %d\n", vertex); 

    while(temp != NULL) { 
        int connectedVertex = temp->vertex; 

        if(graph->visited[connectedVertex] == 0) { 
            DFS(graph, connectedVertex); 
        } 
        temp = temp->next; 
    }        
}

Node* createNode(int v) { 
    Node* newNode = (Node*)malloc(sizeof(Node)); 
    if (!newNode) {
        printf("Memory allocation error\n");
        exit(1);
    }
    newNode->vertex = v; 
    newNode->next = NULL; 
    return newNode; 
}

Graph* createGraph(int vertices) { 
    Graph* graph = (Graph*)malloc(sizeof(Graph)); 
    if (!graph) {
        printf("Memory allocation error\n");
        exit(1);
    }
    graph->numVertices = vertices; 

    graph->adjLists = (Node**)malloc(vertices * sizeof(Node*)); 
    if (!graph->adjLists) {
        printf("Memory allocation error\n");
        exit(1);
    }

    graph->visited = (int*)malloc(vertices * sizeof(int));
    if (!graph->visited) {
        printf("Memory allocation error\n");
        exit(1);
    }

    for (int i = 0; i < vertices; i++) { 
        graph->adjLists[i] = NULL; 
        graph->visited[i] = 0; 
    } 
    return graph; 
}

void addEdge(Graph* graph, int src, int dest) { 
    // Add edge from src to dest 
    Node* newNode = createNode(dest); 
    newNode->next = graph->adjLists[src]; 
    graph->adjLists[src] = newNode; 

    // Add edge from dest to src 
    newNode = createNode(src); 
    newNode->next = graph->adjLists[dest]; 
    graph->adjLists[dest] = newNode; 
}

void printGraph(Graph* graph) { 
    for (int v = 0; v < graph->numVertices; v++) { 
        Node* temp = graph->adjLists[v]; 
        printf("\n Adjacency list of vertex %d\n", v); 
        while (temp) { 
            printf("%d -> ", temp->vertex); 
            temp = temp->next; 
        } 
        printf("NULL\n"); 
    } 
}
