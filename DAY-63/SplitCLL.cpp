#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void push(Node **head, int key) {
    Node * temp = new Node();
    temp->data = key;
    temp->next = (*head);
    (*head) = temp;
}

void splitLL(Node* head, Node ** head1, Node **head2) {

    Node *slow_ptr = head;
    Node *fast_ptr = head;

    if(head == NULL)
        return;

    while(fast_ptr->next != head &&
          fast_ptr->next->next != head)
    {
        fast_ptr = fast_ptr->next->next;
        slow_ptr = slow_ptr->next;
    }

    if(fast_ptr->next->next == head)
        fast_ptr = fast_ptr->next;


    *head1 = head;


    if(head->next != head)
        *head2 = slow_ptr->next;


    fast_ptr->next = slow_ptr->next;


    slow_ptr->next = head;

}

void printList(Node *head)
{
    Node *temp = head;
    if(head != NULL)
    {
        cout << endl;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while(temp != head);
    }
}

int main()
{
    Node* head = NULL;
    Node* head1 = NULL;
    Node* head2 = NULL;

    push(&head, 69);
    push(&head, 420);
    push(&head, 40);
    push(&head, 100);

    printList(head);
    splitLL(head, &head1, &head2);
    printList(head1);
    printList(head2);

    return 0;
}