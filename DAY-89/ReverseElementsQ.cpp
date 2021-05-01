#include <iostream>
#include <bits/stdc++.h>
using namespace std;
stack <int> s;
queue <int> q;

void reverseboiz(int k, int n){

    for(int i=0; i<k; i++)
    {
        s.push(q.front());
        q.pop();
    }

    for(int j=0; j<k;j++)
    {
        q.push(s.top());
        s.pop();
    }

    for(int l=0; l<n-k; l++)
    {
        q.push(q.front());
        q.pop();
    }


};
void print(){

    cout<<"Your queue is: "<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

}

int main() {
    int arr[]={10, 20, 30, 40, 50, 60,
               70, 80, 90, 100};
    int n=sizeof(arr)/sizeof(arr[0]);

    int k=5;
    for(int i=0; i<n; i++)
    {
        q.push(arr[i]);
    }
    reverseboiz(k,n);
    print();


    return 0;
}
