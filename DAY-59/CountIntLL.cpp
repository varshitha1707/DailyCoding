#include <iostream>
using namespace std;

class list {
public:
    int data;
    list *next;
};

//list* list ::create(int key)
//{
//    list *node;
//    node= new list;
//    node->data= key;
//    node->next=NULL;
//    return node;
//}

void push(list** head, int key)
{


   list*new_node = new list();
    new_node->data = key;
    new_node->next= (*head);

    (*head) = new_node;

}

void count(list* head, int aseem)
{
    int count=0;
    list* cur=head;
    while(cur!=NULL)
    {
        if(cur->data==aseem)
        {
            count++;
        }

        cur= cur->next;
        //cout<<head->next;

    }

    cout<<count;
}



int main()
{
    list *head= NULL;
    push(&head, 1);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);
    count(head,1);


    return 0;
}
