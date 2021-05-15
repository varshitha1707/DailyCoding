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
void  levelp(node *root,int level,int ctr)
{
    if(root==NULL)
        return;
    if(level==1)
        cout<<root->data<<" ";
    else if(level>1)
    {
        if(ctr % 2 != 0)
        {
            levelp(root->left,level-1,ctr);
            levelp(root->right,level-1,ctr);
        }
        else
        {
            levelp(root->right,level-1,ctr);
            levelp(root->left,level-1,ctr);
        }



    }
}
void  levelorder(node* root) {
    int h = height(root);
    int ctr = 1;
    for (int i = 1; i <= h; i++)
    {


        cout<<"level"<<i<<" : ";
        levelp(root, i,ctr);
        cout<<endl;
        ctr++;
    }
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

    levelorder(root);

    return 0;
}
