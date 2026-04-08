#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *next;
    int vertex;
};
typedef struct node *GNODE;
GNODE graph[20];


GNODE createNode(int v) {
    GNODE temp = (GNODE)malloc(sizeof(struct node));
    temp->vertex = v;
    temp->next = NULL;
    return temp;
}


void addEdge(int src, int dest) {
    GNODE temp = createNode(dest);
    GNODE cur;

    if (graph[src] == NULL) {
        graph[src] = temp;
    } else {
        cur = graph[src];
        while (cur->next != NULL) {
            cur = cur->next;
        }
        cur->next = temp;
    }
}

void print(int *N) {
    int i;
}