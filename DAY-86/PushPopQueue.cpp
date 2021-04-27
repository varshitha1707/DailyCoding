#include<iostream>
using namespace std;


class queue
{
      int q[5];
public:
    void push(int x );
    void pop();
    void display();
};

static int front=-1;
static int rear=-1;


void queue::push(int x)
{   if(rear==4)
    {
        cout<<"Overflow"<<endl;
    }
    else if(front==-1 && rear==-1)
    {   front=0;
        rear=0;
        q[rear]=x;
    }
    else
    {   rear++;
        q[rear]=x;
    }
}

void queue::pop()
{   if(front==-1 && rear==-1)
    {
        cout<<"underflow"<<endl;
    }
    else if(front==rear)
    {   front=-1;
        rear=-1;
    }
    else
    {   cout<<"Dequeued element is:"<<q[front]<<endl;
        front++;
    }
}

void queue:: display()
{   if(front==-1 && rear==-1)
    {
        cout<<"underflow"<<endl;
    }
    else
    {   cout<<"Queue: ";
        for(int i=front; i<rear+1; i++)
            cout<<q[i]<<" ";
    }
}


int main()
{
    int ch1;
    queue  q1;

    while(ch1!=4)
    {   cout<<"\n----Menu----"<<endl;
        cout<<"1.push"<<endl;
        cout<<"2.pop"<<endl;
        cout<<"3.Display"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"Enter the choice:";
        cin>>ch1;
        switch(ch1)
        {
            case 1:
                cout<<"Enter the value:";
                int a;
                cin>>a;
                q1.push(a);
                break;
            case 2:
                q1.pop();
                break;
            case 3:
                q1.display();
                break;
            case 4:
                exit(0);
            default:
                cout<<"Please enter valid choice"<<endl;

        }

    }

    return 0;
}