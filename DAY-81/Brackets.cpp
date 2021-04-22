#include <iostream>
#include<bits/stdc++.h>

using namespace std;

stack <char> okarin;

void pop(char x) {

    switch (x) {

        case ')':
            if (okarin.top() == '(' ) {
                okarin.pop();
            }
            break;

        case '}':
            if (okarin.top() == '{' ) {
                okarin.pop();
            }
            break;

        case ']':
            if (okarin.top() == '[' ) {
                okarin.pop();
            }
            break;

    }

}

// bool toBalanceOrNotToBalanceThatIsTheQuestion() { } perfect function name doesn't exi-


void push(string variBoi) {




    for (int i = 0; i < variBoi.length(); i++) {

        if (okarin.empty()|| variBoi[i] == '(' || variBoi[i] == '{' || variBoi[i] == '[' ) {
            okarin.push(variBoi[i]);
        } else {
            pop(variBoi[i]);
        }
    }

    if (okarin.empty()){
        cout<<"Balanced";
    } else {
        cout<<"Not Balanced";
    }


}


int main()
{
    string variBoi = "[(])";

    push(variBoi);

    return 0;
}