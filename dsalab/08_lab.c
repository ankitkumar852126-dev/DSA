#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// Create a new node
struct Node* createNode(int value)
{
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// Addition
struct Node* insert(struct Node *root, int value)
{
    if (root == NULL)
        return createNode(value);

    if (root->left == NULL)
        root->left = createNode(value);
    else if (root->right == NULL)
        root->right = createNode(value);
    else
        root->left = insert(root->left, value);

    return root;
}

// Find deepest node
struct Node* deepestNode(struct Node *root)
{
    if (root == NULL)
        return NULL;

    if (root->left == NULL && root->right == NULL)
        return root;

    if (root->right != NULL)
        return deepestNode(root->right);

    return deepestNode(root->left);
}

// Delete deepest node
struct Node* removeDeepest(struct Node *root, struct Node *deepest)
{
    if (root == NULL)
        return root;

    if (root->left == deepest)
    {
        free(root->left);
        root->left = NULL;
        return root;
    }

    if (root->right == deepest)
    {
        free(root->right);
        root->right = NULL;
        return root;
    }

    root->left = removeDeepest(root->left, deepest);

    if (root->left == NULL)
        root->right = removeDeepest(root->right, deepest);

    return root;
}

// Deletion
struct Node* deleteNode(struct Node *root, int value)
{
    if (root == NULL)
        return NULL;

    if (root->data == value)
    {
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }

        struct Node *deepest = deepestNode(root);
        int lastValue = deepest->data;

        root = removeDeepest(root, deepest);
        root->data = lastValue;

        return root;
    }

    root->left = deleteNode(root->left, value);

    if (root->left == NULL)
        root->right = deleteNode(root->right, value);

    return root;
}

// Inorder Traversal
void inorder(struct Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

// Preorder Traversal
void preorder(struct Node *root)
{
    if (root == NULL)
        return;

    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

// Postorder Traversal
void postorder(struct Node *root)
{
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main()
{
    struct Node *root = NULL;
    int choice, value;

    while (1)
    {
        printf("\n\n1. Addition");
        printf("\n2. Deletion");
        printf("\n3. Traversal");
        printf("\n4. Exit");
        printf("\nEnter choice: ");

        if (scanf("%d", &choice) != 1)
            break;

        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                root = insert(root, value);
                break;

            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                root = deleteNode(root, value);
                break;

            case 3:
                printf("Inorder: ");
                inorder(root);

                printf("\nPreorder: ");
                preorder(root);

                printf("\nPostorder: ");
                postorder(root);
                printf("\n");
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
