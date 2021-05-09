#include <iostream>
using namespace std;

class bst{
    int data;
    bst *left, *right;
public:
    bst* insert(bst*root);
    void leaf(bst*root);



};

bst* bst:: insert(bst*root)
{int key;
    cout<<"\nenter the element to be inserted: \n";
    cin>>key;
    bst *newnode= new bst;
    newnode-> data=key;
    newnode->left=NULL;
    newnode->right = NULL;
    if(root==NULL)
        root=newnode;
    else{
        bst *cur=root;
        bst *parent;
        while(cur!=NULL&&cur->data!=key)
        {
            parent = cur;
            if (key < cur->data)
                cur = cur->left;
            else
                cur = cur->right;
        }
        if(cur==NULL)
        {
            if(key < parent->data)
                parent-> left = newnode;
            else
                parent->right = newnode;

        }
        else
        {
            cout<<"\n Element is already present \n";

        }

    }
    return root;

}


void bst ::leaf(bst *root)
{
    if(root==NULL)

        return;
    if(root->left==NULL && root->right==NULL)
    {
        cout << "\n LEAF: " << root->data << endl;
        return;
    }
    leaf(root->left);
    leaf(root->right);

}

int main() {

    bst obj;
    bst *root= NULL;
    int ch;


    while(ch!=3) {
        cout << "\nMENU:\n"
             << "1. INSERT\n"
             << "2. DISPLAY LEAF:\n"
             << "3. EXIT:\n";
        cout << "\n Enter your choice:\n";
        cin >> ch;
        {
            switch (ch) {
                case 1: {
                    root = obj.insert(root);

                }
                    break;
                case 2:
                {
                    obj.leaf(root);
                }
                    break;
                case 3: {

                    cout << "\nending...\n";

                }
                    break;
            }
        }
    }

    return 0;
}

