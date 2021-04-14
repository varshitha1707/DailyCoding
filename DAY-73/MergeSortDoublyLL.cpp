#include <iostream>
using namespace std;

class Node {
public:
    Node* prev;
    int data;
    Node* next;
};

void push(Node **head, int key)
{
    Node * temp = new Node();
    temp->data= key;
    temp->next = temp->prev = NULL;
    if (!(*head))
        (*head) = temp;
    else
    {
        temp->next = *head;
        (*head)->prev = temp;
        (*head) = temp;
    }
}

void printLL ( Node *head)
{
    while( head !=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}
void swap(int *A, int *B)
{
    int temp = *A;
    *A = *B;
    *B = temp;
}

Node *split(Node *head)
{
    Node *fast = head,*slow = head;
    while (fast->next && fast->next->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    Node *temp = slow->next;
    slow->next = NULL;
    return temp;
}
Node *merge(Node *first, Node *second)
{
    if (!first)
        return second;

    if (!second)
        return first;

    if (first->data < second->data)
    {
        first->next = merge(first->next,second);
        first->next->prev = first;
        first->prev = NULL;
        return first;
    }
    else
    {
        second->next = merge(first,second->next);
        second->next->prev = second;
        second->prev = NULL;
        return second;
    }
}

Node * mergeSort( Node *head )
{
    if (!head || !head->next)
        return head;
    Node *second = split(head);

    head = mergeSort(head);
    second = mergeSort(second);


    return merge(head,second);
}

int main() {

    Node * head = NULL;
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; i++)
    {
        push(&head, arr[i]);
    }
    cout << "Before sorting\n";
    printLL(head);
    head = mergeSort(head);
    cout << "After sorting\n";
    printLL(head);

    return 0;
}
