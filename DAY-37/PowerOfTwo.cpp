#include <iostream>
using namespace std;
void poweroftwo(int x)
{
    if(x && !(x & x-1))
        cout<<"yes";
    else
        cout<<"no";
}

int main() {
    int x;
    cout<<"Enter x: ";
    cin>>x;
    poweroftwo(x);
    return 0;
}
