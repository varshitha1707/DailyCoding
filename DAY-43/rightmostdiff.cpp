#include <iostream>
using namespace std;

void rightmost(int a, int b)
{
    unsigned int count = 0;
    int n= a^b;
    int ctr=0;
    while (a) {
        count += n & 1;
        n>>=1;
        ctr++;

        if(count==1)
        {
            cout<<ctr;
            break;
        }
    }
}

int main() {
    int a,b;
    cout << "Enter number:" << endl;
    cin>>a;
    cout << "Enter number:" << endl;
    cin>>b;
    cout<< "The rightmost set bit position is: ";
    rightmost(a,b);
    return 0;
}
