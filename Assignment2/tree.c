#include "tree.h"

Node* createNode() {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed!\n");
        exit(1);
    }

    printf("Enter ID: ");
    scanf("%d", &newNode->id);
    printf("Enter project name: ");
    scanf("%s", newNode->project);
    newNode->left = newNode->right = NULL;
    return newNode;
}

void insertNode(Node** root, Node* newNode) {
    if (*root == NULL) {
        *root = newNode;
        return;
    }

    if (newNode->id < (*root)->id) {
        insertNode(&(*root)->left, newNode);
    } else {
        insertNode(&(*root)->right, newNode);
    }
}

int treeHeight(Node* root) {
    if (root == NULL) {
        return 0;
    }

    int leftHeight = treeHeight(root->left);
    int rightHeight = treeHeight(root->right);
    return (leftHeight > rightHeight) ? leftHeight + 1 : rightHeight + 1;
}

void freeTree(Node* root) {
    if (root == NULL) {
        return;
    }

    freeTree(root->left);
    freeTree(root->right);
    free(root);
}
