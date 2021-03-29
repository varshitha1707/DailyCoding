#include <iostream>
using namespace std;
class list{
    int data;
    list *link;
public:
    list * create(int key);
    void display(list*);

};

list * list:: create(int key)
{
    list *newnode;
    newnode= new list;
    newnode -> data = key;
    newnode -> link = NULL;
    return newnode;
}
void list:: display( list *newnode)
{
    cout<<"linked list is:"<<newnode->data;
    cout<<endl;
}
int main()
{
    int key;
    list p;
    list *head;
    cout<<"enter the data to add in linked list:";
    cin>>key;
    cout<<endl;
    head=p.create(key);
    p.display(head);
    return 0;
}