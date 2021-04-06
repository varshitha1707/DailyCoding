#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

void push(Node**head, int key)
{
    Node* temp = new Node();
    temp->data= key;
    temp->next=(*head);
    (*head)=temp;

}

void DetectLoop(Node *head,int size)
{
    int temp=0;
    while(temp<size+1)
    {
        if(head==NULL)
        {
            cout<<"loop does not exist";
            break;
        }
        else
        {
            head=head->next;
            temp++;
        }
    }

    if(head != NULL)
        cout<<"loop exists";
}

int main()
{
    Node *head = NULL;
    int arr[] = {5,4,3,2,1}; // 5
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i < size;i++ )
    {
        push(&head,arr[i]);
    }

    head->next->next= head; // testing for a loop

    DetectLoop(head,size);

    return 0;
}
