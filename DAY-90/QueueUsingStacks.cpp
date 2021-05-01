#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//q1 5

// q2 4 3 2 1


stack <int> q1, q2;

void push(int x) {

    q1.push(x);

}

void pop() {

    while(q1.size() != 1) {

        q2.push(q1.top());
        q1.pop();
    }

    int a = q1.top();
    q1.pop();

    stack<int> q = q1;
    q1 = q2;
    q2 = q;

    cout<<"Pop-eye the Sailor man: "<< a;
}

int main()
{

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    pop();

    return 0;
}