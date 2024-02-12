#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

struct myNode *createNode()
{
    struct myNode *newNode = (struct myNode *)malloc(sizeof(struct myNode));

    if (!newNode)
    {
        printf("Memory error\n");
        return NULL;
    }

    printf("Enter id: ");
    scanf("%d", &newNode->id);

    printf("Enter project name: ");
    scanf("%s", newNode->project);

    newNode->left = newNode->right = NULL;

    return newNode;
}

struct myNode *insertNode(struct myNode *root)
{
    int choice;

    if (root == NULL)
    {
        return createNode();
    }

    printf("1. Insert Left\n2. Insert Right\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        root->left = insertNode(root->left);
    }
    else if (choice == 2)
    {
        root->right = insertNode(root->right);
    }
    else
    {
        printf("Invalid choice. Please try again.\n");
    }

    return root;
}

void treeHeight(struct myNode *root)
{
    int leftHeight, rightHeight;

    if (root == NULL)
    {
        printf("Height of tree is 0\n");
        return;
    }

    leftHeight = treeHeight(root->left);
    rightHeight = treeHeight(root->right);

    if (leftHeight > rightHeight)
    {
        printf("Height of tree is %d\n", leftHeight + 1);
    }
    else
    {
        printf("Height of tree is %d\n", rightHeight + 1);
    }
}

void freeTree(struct myNode *root)
{
    if (root == NULL)
    {
        return;
    }

    freeTree(root->left);
    freeTree(root->right);
    free(root);
}
