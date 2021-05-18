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


int identical (node *root1, node *root2) {
    if (root1 == NULL && root2 == NULL) {

        return true;
    }

    if (root1 == NULL || root2 == NULL) {

        return false;
    }

    return
            (root1 -> data == root2 -> data &&
                    identical(root1->left, root2->left)
                    && identical(root1->right, root2->right));


}


int main()
{
    node *root1 = new node(1);
    node *root2 = new node(1);

    root1 -> left = new  node(2);
    root1 -> right = new node(2);
    root2 -> left = new node(2);
    root2 -> right = new node(2);
    root1 -> left -> left = new node(4);
    root2 -> right -> right = new node(4);


    if(identical(root1, root2))
    {
        cout<<"Identical";
    }
    else
    {
        cout<<"Not Identical";
    }

    return 0;
}