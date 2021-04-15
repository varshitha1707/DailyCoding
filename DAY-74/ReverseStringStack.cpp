#include<iostream>

using namespace std;

class Node
{
public:
    Node * size;
     string data;
     Node *next;
}
        *top=NULL,*p; //LCFS

Node* newnode(char x)
{
    p=new Node;
    p->data=x;
    p->next=NULL;
    return(p);
}

void push(Node *q)
{
    if(top==NULL)
        top=q;
    else
    {
        q->next=top;
        top=q;
    }
}

void pop(){
    if(top==NULL){
        cout<<"Stack is empty!!";
    }
    else{
        cout<<"Deleted element is "<<top->data;
        p=top;
        top=top->next;
        delete(p);
    }
}

void showstack()
{
    Node *q;
    q=top;

    if(top==NULL){
        cout<<"Stack is empty!!";
    }
    else{
        cout<<"\nReversed String is:\n";
        while(q!=NULL)
        {
            cout<<q->data;
            q=q->next;
        }
        cout<<"\n";
    }
}

int main()
{
    int ch,size;
    string str;
    Node *nptr;

    while(ch!=4)
    {
        cout<<"\n1.Push\n2.Pop\n3.Display\n4.Exit";
        cout<<"\nEnter your choice(1-4):";
        cin>>ch;

        switch(ch){
                case 1: cout<<"\n Enter size:";
                cin>>size;
                cout<<"\nEnter data:";
                cin>>str;
            for(int i=0; i<size; i++)
            {

                nptr=newnode(str[i]);
                push(nptr);
            }
                break;

            case 2: pop();
                break;

            case 3: showstack();
                break;

            case 4: break;

            default: cout<<"\nWrong choice!!";
        }
    }

    return 0;
}