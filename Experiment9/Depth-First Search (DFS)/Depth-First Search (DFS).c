#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100


typedef struct Node {
    int vertex;
    struct Node* next;
} Node;

Node* adjList[MAX_VERTICES];
int visited[MAX_VERTICES];


Node* createNode(int vertex) {
    
         Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->vertex = vertex;
    newNode->next = NULL;
    return newNode;  
    
    
    
}


void addEdge(int u, int v) {
    
    Node* newNode = createNode(v);

    if (adjList[u] == NULL) {
        adjList[u] = newNode;
    } else {
        Node* temp = adjList[u];
        while (temp->next != NULL) {
}