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

void printLL(Node *head) {

    while (head != NULL) {
        cout<< head -> data<< "-> ";
        head = head -> next;
    }
}

void deleteMid(Node *head, int size, int x) {

    //int half = size / 2 ;

    for (int i = 0; i < size; i++) {

        if (i == x-1)
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
    int x;
    int arr[] = {5,4,3,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; i++)
    {
        push(&head, arr[i]);
    }
    head->next->next->next->next->next=head;


    //printLL(head);
    cout<<"\nEnter the position of the element you want to delete (1-5)"<<endl;
    cin>>x;
    cout<<"\nAfter deletion of the first element:"<<endl;
    deleteMid(head, size,x);

    return 0;
}