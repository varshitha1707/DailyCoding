#include<iostream>
using namespace std;

class node

{
public:
    node *left,*right;
    int data;
    node(int k);

};
node :: node(int k)
{
    data = k;
    left =  right = NULL;
}


class stack
{
public:
    stack * next;
    node * t;
    int flag;
    stack * push(stack *, node *, int);
    stack * pop(stack *);

};
stack * stack::push(stack * top, node * temp, int f)
{   stack * newnode=new stack;
    newnode->flag=f;
    newnode->t=temp;
    newnode->next= NULL ;
    if(top== NULL )
        top=newnode;
    else
    {   newnode->next=top;
        top=newnode;
    }

    return top;
}
stack * stack::pop(stack * top)
{   stack * temp=top;
    if(top==NULL)
        cout<<"Stack is empty"<<endl;
    else
    {   top=top->next;
        delete temp;
    }
    return top;
}


void inorder(node * root)
{   node * curr=root;
    stack * top=NULL;
    while(1)
    {   while(curr)
        {   top=top->push(top,curr,0);
            curr=curr->left;
        }
        if(top!=NULL)
        {   curr=top->t;
            top=top->pop(top);
            cout<<curr->data<<" ";
            curr=curr->right;
        }
        else
            break;
    }
}
void preorder(node * root)
{   node * curr=root;
    stack * top=NULL;
    while(1)
    {   while(curr)
        {   cout<<curr->data<<" ";
            if(curr->right)
                top=top->push(top,curr->right,0);
            curr=curr->left;

        }
        if(top!=NULL)
        {   curr=top->t;
            top=top->pop(top);
        }
        else
            break;
    }


}
void postorder(node * root)
{   stack * top=NULL;
    node * curr=root;
    int flag;
    do
    {   while(curr!=NULL)
        {   top=top->push(top,curr,0);
            curr=curr->left;
        }
        flag=top->flag;
        curr=top->t;
        top=top->pop(top);
        if(flag==1)
        {   cout<<curr->data<<" ";
            curr=NULL;
        }
        else
        {   top=top->push(top,curr,1);
            curr=curr->right;
        }
    }
    while(top!=NULL);

}

int main()
{
    int ch,flag=0;

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