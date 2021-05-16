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


int  height(node *root)
{
    if(root==NULL)
        return 0;
    else
    {
        int lh=height(root->left);
        int rh=height(root->right);
        if(lh>rh)
            return(lh+1);
        else
            return(rh+1);

    }
}


node* LCA(node* root, int p, int q) {

    if(root==NULL) return NULL;
    if(root->data==p || root->data==q)
        return root;

    node* l= LCA(root->left,p,q);
    node* r= LCA(root->right,p,q);

    if(l!=NULL && r!=NULL)
        return root;

    return (l?l:r);



}

int main()
{
    node * root  = new node(1);


    root -> left = new node ( 2);
    root -> right = new node ( 3);

    root ->left->left= new node(4);
    root ->left->right = new node(5);

    root -> right->left = new node ( 6);
    root -> right -> right = new node ( 7);

    root= LCA(root,4,5);
    cout<<root->data;

    return 0;
}
