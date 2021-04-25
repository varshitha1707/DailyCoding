#include <iostream>
#include <bits/stdc++.h>
using namespace std;

stack <int> s;

void push (int n, int price[])
{
    for (int i=0; i<n; i++ )
    {
        s.push(price[i]);
    }

}

void calculate(int price[],int n)
    {

        int ctr=0;
        for (int i=1; i<n+1; i++ )
        {
            int temp=s.top();
            while(s.top()<=temp)
            {
                ctr++;
                s.pop();
            }

            if(s.empty())
            {
                ctr=1;
                cout<<ctr<<", ";
            }
            cout<<ctr<<", ";
            push(n-i,price);
            ctr=0;
        }
    }

int main() {

    int price[]= {100, 80, 60, 70, 60, 75, 85};
    int n = sizeof(price)/sizeof(price[0]);

    push(n,price);
    calculate(price,n);
    return 0;
}
