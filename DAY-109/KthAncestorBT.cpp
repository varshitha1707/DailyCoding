
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    struct Node *left, *right;
};

Node* temp = NULL;

Node* kthAncestorDFS(Node *root, int node , int &k)
{
    if (!root)
        return NULL;

    if (root->data == node||
        (temp = kthAncestorDFS(root->left,node,k)) ||
        (temp = kthAncestorDFS(root->right,node,k)))
    {
        if (k > 0)
            k--;

        else if (k == 0)
        {
            cout<<"Kth ancestor is: "<<root->data;

            return NULL;
        }

        return root;
    }
}

Node* newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    int k = 2;
    int node = 5;

    Node* parent = kthAncestorDFS(root,node,k);

    if (parent)
        cout << "-1";

    return 0;
}
