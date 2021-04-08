#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    int flag;
};

void push(Node** head, int new_data)
{
    Node* new_node = new Node;

    new_node->data = new_data;

    new_node->flag = 0;

    new_node->next = (*head);

    (*head) = new_node;
}

bool intersectLL(Node* h)
{
    while (h != NULL) {

        if (h->flag == 1)
        {
            return true;
            break;

        }

        h->flag = 1;

        h = h->next;
    }

    return false;
}

void printLL(Node*head){

    while(head != NULL) {

        cout<< head -> data;

        head = head->next;
    }
}



int main()
{
    Node* newNode;
    Node* head1 = new Node();
    head1->data = 10;
    Node* head2 = new Node();
    head2->data = 3;
    newNode = new Node();
    newNode->data = 6;
    head2->next = newNode;
    newNode = new Node();
    newNode->data = 9;
    head2->next->next = newNode;        //all this is for experimentz
    newNode = new Node();
    newNode->data = 15;
    head1->next = newNode;
    head2->next->next->next = newNode;
    newNode = new Node();
    newNode->data = 30;
    head1->next->next = newNode;
    head1->next->next->next = NULL;
    Node* intersect_node = NULL;


    //printLL(head1);
    printLL(head2);

    intersectLL(head1);

    if (intersectLL(head2)){
        cout<<"Has an intersection" ;
    } else {
        cout<<"There's no intersection, bro.";
    }

    //intersectLL(head2);


    return 0;
}