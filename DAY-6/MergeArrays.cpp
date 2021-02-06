#include <iostream>
using namespace std;
void mergearray(int ar1[],int ar2[], int n, int m)
{
    for(int j=0;j<m;j++)
    {
        int temp;
        for(int k=0;k<n;k++)
        {
            if(ar1[k]>ar2[j])
            {
                temp=ar1[k];
                ar1[k]=ar2[j];
                ar2[j]=temp;
            }

        }
    }
}

void bubbleSort( int m, int ar2[])
{
    int i, j;
    for (i = 0; i < m-1; i++)


        for (j = 0; j < m-i-1; j++)
            if (ar2[j] > ar2[j+1])
            {
                int temp=ar2[j];
                ar2[j]=ar2[j+1];
                ar2[j+1]=temp;
            }
}

int main() {
    int n, m;
   cout << "Enter the first array size:" << endl;
   cin>>n;
    int ar1[n] ;
   cout<<"Enter elements of the first array in asc:"<<endl;
   for(int i=0; i<n;i++)
   {
       cin>>ar1[i];
   }
   cout << "Enter the second array size:" << endl;
   cin>>m;
   int ar2[m];
   cout<<"Enter elements of the second array in asc:"<<endl;
   for(int i=0; i<m;i++)
   {
       cin>>ar2[i];
   }

   mergearray(ar1,ar2,n,m);

    bubbleSort(  m, ar2);
    cout<<"The first array:";
    for(int i=0; i<n;i++)
    {
        cout<<ar1[i]<<" ";
    }

    cout<<"The second array:";
    for(int i=0; i<m;i++)
    {
        cout<<ar2[i]<<" ";
    }



    return 0;
}
