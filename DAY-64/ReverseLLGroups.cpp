#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

};

    Node * reverse(Node* head, int k)
    {
        if (!head)
            return NULL;
        Node* current = head;
        Node *prev = NULL, *next = NULL;
        int count =0;


        while (current != NULL && count<k) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
            count++;

        }
        //head = prev;

        if(next !=NULL)
        {
            head->next=reverse(next,k);
        }

        return prev;
    }

void printList(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";

        head = head->next;
    }
}

    void push(Node**head, int key )
    {
        Node* temp = new Node();
        temp->data= key;
        temp->next = (*head);
        (*head) = temp;
    }

int main()
{

    Node* head = NULL;

    push(&head, 8);
    push(&head, 7);
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    cout << "Given linked list\n";
    printList(head);

    head= reverse(head, 3);

    cout << "\nReversed Linked list \n";
    printList(head);
    return 0;
}