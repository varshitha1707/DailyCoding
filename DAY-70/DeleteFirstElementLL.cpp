#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node *next;
};

void push(Node**head, int key) {
    Node * temp = new Node();
    temp -> data = key;
    temp -> next = (*head);
    (*head) = temp;
}


void deleteFirst(Node *head, int size) {

    for (int i = 0; i < size; i++) {

        if (i == 0)
        {
            head = head -> next ;
        }
        else
        {
            cout<<head->data<< " -> ";
            head = head->next;

        }


    }

}

int main()
{
    Node *head = NULL;
    int arr[] = {5,4,3,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; i++)
    {
        push(&head, arr[i]);
    }
    head->next->next->next->next->next=head;


    cout<<"\nAfter deletion of the first element:"<<endl;
    deleteFirst(head, size);

    return 0;
}