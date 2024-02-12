#ifndef TREE_H
#define TREE_H

#define MAX_PROJ_NAME 32

typedef struct myNode
{
    int id;
    char project[MAX_PROJ_NAME];
    struct myNode *left;
    struct myNode *right;
} myNode;

myNode *createNode();
myNode *insertNode(myNode *root);
void treeHeight(myNode *root);
void freeTree(myNode *root);

#endif // TREE_H
