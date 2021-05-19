#include <iostream>
using namespace std;

class node{
public:
    int data;
    node *left, *right;
    node(int key){
        data = key;
        left = right = NULL;
    };
};

    bool hasPathSum(node* root, int sum)
    {
        if(!root) return false;

        if(!root->left && !root->right && sum==root->data) return true;

        return hasPathSum(root->left,sum-root->data)|| hasPathSum(root->right,sum-root->data);

    }



int main()
{
    node * root  = new node(10);

    root -> left = new node ( 8);
    root -> right = new node ( 2);

    root ->left->left= new node(3);
    root ->left->right = new node(5);

    root -> right->left = new node ( 2);

    int sum = hasPathSum(root,21);
    if(sum)
        cout<<"yes";
    else
        cout<<"nahi yaar";

    return 0;
}