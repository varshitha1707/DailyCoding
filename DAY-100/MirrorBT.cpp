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


int mirror (node *root1, node *root2) {
    if (root1 == NULL && root2 == NULL) {
//        cout<<"Jackass mirror";
            return true;
    }

    if (root1 == NULL || root2 == NULL) {
//        cout<<"Not mirror bc";
// explicit code hai 18+ onli
          return false;
    }

    return
    (root1 -> data == root2 -> data &&
    mirror(root1 -> left, root2 -> right)
    && mirror(root1 -> right, root2 -> left));


}


int main()
{
    node *root1 = new node(1);
    node *root2 = new node(1);

    root1 -> left = new  node(2);
    root1 -> right = new node(3);
    root2 -> left = new node(3);
    root2 -> right = new node(2);
    root1 -> left -> left = new node(4);
    root2 -> right -> right = new node(4);


    if(mirror(root1, root2))
    {
        cout<<"Jackass mirror";
    }
    else
    {
        cout<<"Not mirror bc";
    }

    return 0;
}