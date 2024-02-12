#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int main()
{
    struct myNode *root = NULL;
    int choice;

    while (1)
    {
        printf("\n1. Insert Node\n2. Calculate Tree Height\n3. Free Tree\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            root = insertNode(root);
            break;
        case 2:
            treeHeight(root);
            break;
        case 3:
            freeTree(root);
            root = NULL;
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    }

    return 0;
}
