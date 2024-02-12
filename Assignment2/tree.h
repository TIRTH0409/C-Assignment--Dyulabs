#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdlib.h>

#define MAX_PROJ_NAME 32

typedef struct myNode {
    int id;
    char project[MAX_PROJ_NAME];
    struct myNode *left;
    struct myNode *right;
} Node;

Node* createNode();
void insertNode(Node** root, Node* newNode);
int treeHeight(Node* root);
void freeTree(Node* root);

#endif
