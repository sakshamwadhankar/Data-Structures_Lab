// Name: Saksham Wadhankar
// PRN: 25070521221
// Value Added Problem

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* create(int val) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = val;
    n->left = n->right = NULL;
    return n;
}

struct Node* insert(struct Node* root, int val) {
    if (root == NULL) return create(val);
    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);
    return root;
}

void range(struct Node* root, int low, int high) {
    if (root == NULL) return;
    if (root->data > low)
        range(root->left, low, high);
    if (root->data >= low && root->data <= high)
        printf("%d ", root->data);
    if (root->data < high)
        range(root->right, low, high);
}

int main() {
    struct Node* root = NULL;
    int n, x, low, high;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        root = insert(root, x);
    }
    scanf("%d %d", &low, &high);
    range(root, low, high);
    return 0;
}