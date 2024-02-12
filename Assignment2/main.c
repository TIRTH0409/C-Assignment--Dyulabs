#include "tree.h"

int main() {
    Node* root = NULL;

    int choice;
    do {
        printf("\n1. Insert node\n");
        printf("2. Calculate height\n");
        printf("3. Free tree\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertNode(&root, createNode());
                break;
            case 2:
                printf("Tree height: %d\n", treeHeight(root));
                break;
            case 3:
                freeTree(root);
                root = NULL;
                printf("Tree freed\n");
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}
