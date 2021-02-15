/*#include <iostream>
using namespace std;
void Sort(int arr[],int n)
{
    for(int i=0; i<n;i++)
    {
        if(arr[i]==0)
        {

        }
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Sort(arr,n);
    return 0;
}
*/

#include <iostream>

using namespace std;

int partition(int a[],int l,int u)
{
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;

    do
    {
        do
            i++;

        while(a[i]<v&&i<=u);

        do
            j--;
        while(v<a[j]);

        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);

    a[l]=a[j];
    a[j]=v;

    return(j);
}
void quick_sort(int a[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }
}



int main()
{
    int a[50],n,i;
    cout<<"Number of elements: ";
    cin>>n;
    cout<<"\nEnter elements:";

    for(i=0;i<n;i++)
        cin>>a[i];

    quick_sort(a,0,n-1);
    cout<<"\nAfter sorting:";

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    cout<<"Sorted.";

    return 0;
}