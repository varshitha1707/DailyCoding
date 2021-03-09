#include <iostream>
using namespace std;

void isKthBitSet(int n, int k)
{
    if (n & (1 << (k - 1)))
        cout << "SET";
    else
        cout << "NOT SET";
}

int main()
{
    int n = 5, k = 1;
    isKthBitSet(n, k);
    return 0;
}