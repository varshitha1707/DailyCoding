#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
};

int isLeaf(node *node)
{
    if(node == NULL)
        return 0;
    if(node->left == NULL && node->right == NULL)
        return 1;
    return 0;
}

int ChildSum(node* node)
{
    int ls;
    int rs;

    if(node == NULL || isLeaf(node))
        return 1;

    if(ChildSum(node->left) && ChildSum(node->right))
    {

        if(node->left == NULL)
            ls = 0;
        else if(isLeaf(node->left))
            ls = node->left->data;
        else
            ls =  (node->left->data);

        if(node->right == NULL)
            rs = 0;
        else if(isLeaf(node->right))
            rs = node->right->data;
        else
            rs =  (node->right->data);

        return(node->data == ls + rs);
    }
    return 0;
}

node* newNode(int data)
{
    node* node1 = new node();
    node1->data = data;
    node1->left = NULL;
    node1->right = NULL;
    return(node1);
}

int main()
{
    node *root = newNode(10);
    root->left = newNode(8);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(5);
    root->right->left = newNode(2);
    if(ChildSum(root))
        cout << "The given tree satisfies the children sum property ";
    else
        cout << "The given tree does not satisfies the children sum property ";
    return 0;
}

