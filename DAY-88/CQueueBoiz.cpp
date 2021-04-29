#include <iostream>

using namespace std;

class cqueue
{
    int front;
    int rear;
    int size;
    int cq[10];
public:
    void enqueue(int x);
    void dequeue();
    bool cqueuefull();
    void display();
    cqueue()
    {   size=6;
        front=rear=-1;
    }
};
bool cqueue :: cqueuefull()
{
    if(front==(rear+1)%size)
        return true;
    else
        return false;
}

void cqueue :: enqueue(int x)
{  int element = x;
    if(cqueuefull())
    {
        cout<<"queue full!";
    }
    else
    {
        if(front==-1&rear==-1)
        {
            front= rear=0;
            cq[rear]=element;
        }
        else
        {
            rear= (rear+1)%size;
            cq[rear]=element;
        }
    }
}



void cqueue::dequeue()
{
    if(front==-1&& rear==-1)
    {
        cout<<"queue is empty!";

    }
    else
    {
        if(front==rear)
        {
            int item= cq[front];
            cout<<"\nthe deleted item is: "<<item<<endl;
            front=rear=-1;
        }
        else
        {
            int item =cq[front];
            cout<<"\nthe item to be deleted is: "<<item<<endl;
            front=(front+1)%size;
        }
    }
}

void cqueue:: display()
{ int i;
    if(front == -1&& rear==-1)
    {
        cout<<"queue is empty!";
    }
    else
    {
        {
            cout<<endl;
            for (int i = front; i !=(rear); i=((i+1)%size))
            {
                cout <<cq[i] << "\t";
            }
            cout<<cq[rear]<<endl;
        }

    }

}
int main() {

    int ch;
    cqueue q;

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++)
    {
        q.enqueue(arr[i]);
    }


    q.display();
    q.dequeue();
    q.dequeue();
    q.display();


    return 0;
}
