#include <iostream>
using namespace std;

void rightmost(int a)
{
    unsigned int count = 0;
    int ctr=0;
    while (a) {
        count += a & 1;
        a>>=1;
        ctr++;

        if(count==1)
        {
            cout<<ctr;
            break;
        }
      }
}

int main() {
    int a;
    cout << "Enter number:" << endl;
    cin>>a;
    cout<< "The rightmost set bit position is: ";
    rightmost(a);
    return 0;
}
