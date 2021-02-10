#include <iostream>
using namespace std;

void Intersection(int ar1[], int n1, int ar2[], int n2)
{

    int i=0, j=0;
    while(i<n1 && j<n2)
    {
        if(ar1[i]==ar2[j]) // [1,2,3,4] , [1,3,5,6]
        {
            cout<<ar1[i++]<<" ";
        }
        else if(ar1[i]<ar2[j])
        {
            i++;
        }
        else j++;

    }
}

int main()
{
    int n1,n2;
    cout << "Enter the size of the first array" << endl;
    cin>>n1;
    int ar1[n1];
    cout<<"Enter the elements of the first array:";
    for(int i = 0; i<n1; i++)
    {
        cin>>ar1[i];
    }
    cout<<"Enter the size of the second array";
    cin>>n2;
    int ar2[n2];
    cout<<"Enter the elements of the second array";
    for(int i=0; i<n2; i++)
    {
        cin>>ar2[i];
    }

    Intersection(ar1,n1,ar2,n2);

    return 0;
}
