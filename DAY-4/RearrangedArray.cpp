#include <iostream>
using namespace std;

void RearragedArray(int n, int ar[], int as[])
{
    cout<<"The rearranged array is: ";
    for(int j=0; j<n; j++)
    {
        ar[j] = as[as[j]];
        cout<<ar[j]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter n (Size of your array): "<<endl;
    cin>>n;
    int as[n],ar[n];
    cout << "Enter the elements of the array"<<endl;
    for( int i=0; i<n; i++)
    {
        cin>>as[i];
    }
    RearragedArray(n, ar ,as);
    return 0;
}
