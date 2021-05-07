#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *next;
};

void push(node **head, int key)
{
    node * temp = new node();
    temp->data=key;
    temp->next = (*head);
    (*head) = temp;
}

void EvenOdd(node * head)
{
    int ctr=0;
    node* temp=head;
    while(temp!=NULL)
    {
        ctr++;
        temp=temp->next;
    }

    if(ctr%2!=0)
    {
        cout<<"ODD";
    }
    else
    {
        cout<<"EVEN";
    }

}

int main() {
    node * head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    push(&head,5);
    EvenOdd(head);
    return 0;
}
