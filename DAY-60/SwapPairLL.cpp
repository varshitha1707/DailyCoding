#include <iostream>

using namespace std;

class List {
public:

    int data;
    List *next;
};

void swapPair(List * head) {


    for(int i=0; i<3;i++) {
        List *curr = head;
        List *save = head-> next;
        List *temp;

        temp = curr;
        curr = save;
        save = temp; // whoohoo

        cout<<curr->data<<endl;
        cout<<save->data<<endl;

        head = curr-> next;


    }

}

void push(List **head, int key ) {
    List *newNode = new List();

    newNode->data = key;
    newNode-> next = (*head);
    (*head) = newNode;
}


int main()
{
    List* head = NULL;

    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    push(&head, 6);

    swapPair(head);

    cout<<"Varshitha is a genius.";

    return 0;
}