#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


#define MAX_OPS 100


typedef struct Node {
    

    int data;
    struct Node *left;
    struct Node *right;
    
    
    
} Node;


Node* createNode(int data) {
     Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
    //code here...
    
    
}


Node* insert(Node *root, int data) {
    if (root == NULL)
        return createNode(data);

}