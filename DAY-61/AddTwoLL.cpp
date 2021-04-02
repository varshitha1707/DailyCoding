#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void push1( Node** head, int key)
{
    Node* temp = new Node();
    temp->data = key;
    temp->next = (*head);

    (*head) = temp;
}

void push2( Node** now, int key)
{
    Node* temp = new Node();
    temp->data = key;
    temp->next = (*now);

    (*now) = temp;
}

void add( Node * head, Node * now)
{
    for(int i=0; i<3; i++)
    {
        int sum = head->data + now->data ;
        cout<<sum<<"->";

        head = head->next;
        now = now->next;
    }

}

int main() {

    Node* head = NULL;
    Node* now = NULL;

    push1(&head,5);
    push1(&head,2);
    push1(&head,3);

    push2(&now,3);
    push2(&now,4);
    push2(&now,2);

    add(head,now);

    return 0;
}
