#include <iostream>
using namespace std;

int bitflip(int a, int b)
{
    int n= a^b;
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;}
    cout<<count;
}
int main()
{
    int a,b;
    cout<<"\nEnter a and b: "<<endl;
    cin>>a>>b;
    cout << "The number of bits to be flipped are: " << endl;
    bitflip(a,b);

    return 0;
}
