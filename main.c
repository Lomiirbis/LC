
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


typedef struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
}TreeNode;

TreeNode* treeInsert(TreeNode *t, int data)
{
    TreeNode *newNode;
    newNode = (TreeNode*) malloc(sizeof(TreeNode));
    newNode->key = data;
    newNode->left = NULL;
    newNode->right = NULL;
    TreeNode *current = t;
    TreeNode *parent = t;
    if (t == NULL)
    {
        t = newNode;
    }
    else
    {
        while (current->key != data)
        {
            parent = current;
            if (current->key > data)
            {
                current = current->left;
                if (current == NULL)
                {
                    parent->left = newNode;
                    return t;
                }
            }
            else
            {
                current = current->right;
                if (current == NULL)
                {
                    parent->right = newNode;
                    return t;
                }
            }
        }
    }
    return t;
}


void printTree(TreeNode *root)
{
    if (root)
    {
        printf("%d", root->key);
        if (root->left || root->right)
        {
            printf("(");
            if (root->left)
                printTree(root->left);
            else
                printf("NULL");
            printf(",");
            if (root->right)
                printTree(root->right);
            else
                printf("NULL");
            printf(")");
        }
    }
}


void freeTree(TreeNode *root)
{
    if (root != NULL)
    {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

bool treeSearch(TreeNode *root, int data)
{
    if (root == NULL)
        return NULL;
    if (root->key == data)
        return root;

        if(data < root->key)
            return treeSearch(root->left, data);
        else
            return treeSearch(root->right, data);

}

int height(TreeNode* root)
{
    if (root == NULL)
        return 0;

    return 1 + max(height(root->left), height(root->right));
}

int max(int a, int b)
{
    return (a >= b) ? a : b;
}

bool isBalanced(TreeNode* root)
{
    int lh;
    int rh;

    if (root == NULL)
        return 1;

    lh = height(root->left);
    rh = height(root->right);

    if (abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return 1;

    return 0;

}

int main()
{
    TreeNode *first = NULL;
    TreeNode *tree = treeInsert(first, 10);
    treeInsert(tree, 8);
    treeInsert(tree, 19);
    treeInsert(tree, 5);
    treeInsert(tree, 9);
    treeInsert(tree, 16);
    treeInsert(tree, 21);
    printTree(tree);
    printf("\n");

    printf("%s \n", (treeSearch(first,16))? "TRUE" : "FALSE");

    if (isBalanced(tree))
        printf("Tree is balanced");
    else
        printf("Tree is not balanced");

    freeTree(tree);
    return 0;
}
