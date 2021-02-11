#include <iostream>
using namespace std;
/*int aseem= 0;
void swap(int max, int min)
{
    int t = max;
    max = min;
    min = t;
    aseem++;
    cout<<"hswap";

}

void MinSwap(int ar[],int n)
{
    int i=0,j=0;
    int max=ar[i];
    int min=ar[j];
while(i<n&&j<n)
{
    while(i<n )
    {
        if(ar[i]<max)
        {
            i++;
            cout<<"h1";
        }
        else
        {max=ar[i];
            cout<<"h2";
            i++;}




    }
    while(j<n)
    {
        if(ar[j]>min)
        {
            j++;
            cout<<"h3";
        }
        else
        {min=ar[j];
            cout<<ar[j];
            j++;}
    }

    cout<<"\n"<<min<<" "<<max;
    i++;
    j++;

    int t = ar[i];
    ar[i] = ar[j];
    ar[j] = t;
    aseem++;
    cout<<"hswap";
}

}

 */

int aseem=0;
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


void quick_sort(int a[],int l,int u) {
    int j;
    if (l < u) {
        j = partition(a, l, u);
        aseem++;
        quick_sort(a, l, j - 1);

        quick_sort(a, j + 1, u);

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
        cout<<a[i]<<" "<<endl;

    cout<<"Sorted.";

    cout<<aseem;

    return 0;
}





