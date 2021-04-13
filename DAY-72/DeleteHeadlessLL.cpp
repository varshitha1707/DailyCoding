#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;
};

void push (Node **head, int key) {

    Node *temp = new Node();
    temp -> data = key;
    temp -> next = (*head);
    (*head) = temp;
}

void print (Node *head) {

    while (head != NULL) {
        cout<< head->data << " -> ";
        head = head -> next;
    }

    cout<<endl;
}

void deleteTheElementBitxh(Node *vari) {

    if (vari == NULL)
        return;
    else {

        if (vari->next == NULL) {
            cout<<"This is last node, require head, can't "
                  "be freed\n";
            return;
        }

        Node* temp = vari->next;

        vari->data = vari->next->data;

        vari->next = vari->next->next;

        free(temp);
    }
}



int main()
{
    Node *head = NULL;

    push(&head, 17);
    push(&head, 07);
    push(&head, 15);
    push(&head, 11);
    push(&head, 01);

    print(head);

    Node *del = head -> next;

    deleteTheElementBitxh(del);

    print(head);



    return 0;
}
