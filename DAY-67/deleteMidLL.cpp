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

void deleteMid(Node *head, int size) {

    int half = size / 2 ;

    for (int i = 0; i < size; i++) {

        if (i == half)
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


    cout<<"\nThe given list is:"<<endl;
    printLL(head);
    cout<<"\nAfter deletion of the middle element:"<<endl;
    deleteMid(head, size);

    return 0;
}