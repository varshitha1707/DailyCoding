#include <bits/stdc++.h>

using namespace std;

class node {
public:
    int data;
    node *left, *right;
    node(int k);
};

node :: node(int k)
{
    data = k;
    left =  right = NULL;
}



void inorder(node* root)
{   if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node * root)
{   if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node * root)
{   if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


int main()
{
    int ch;

    node *root = new node(26);
    root->left = new node(10);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(6);
    root->right->right = new node(3);


    while(ch!=4)
    {
        cout<<"\n----Menu----"<<endl;
        cout<<"1.inorder"<<endl;
        cout<<"2.preorder"<<endl;
        cout<<"3.postorder"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                inorder(root);
                break;
            case 2:
                preorder(root);
                break;
            case 3:
                postorder(root);
                break;
            case 4:
                cout<<"ending...";
                break;
            default:
                cout<<"Enter a valid choice!";
                break;

        }
    }




    return 0;
}