#include <iostream>
using namespace std;

void FindMedian(int ar1[], int ar2[], int m, int n, int median)
{
    int m1,m2;
    for (int i = n - 1; i >= 0; i--)
    {
        int j, last = ar1[m - 1];
        for (j = m - 2; j >= 0 && ar1[j] > ar2[i]; j--)
            ar1[j + 1] = ar1[j];

        if (j != m - 2 || last > ar2[i])
        {
            ar1[j + 1] = ar2[i];
            ar2[i] = last;
        }
    }

    if((n+m)%2!=0)
    {
        m1=(n+m)/2;
        if(m1<m)
        {
            median=ar1[m1];

        }
        else
        {
            median=ar2[n-m1-1];
        }
    }
    else
    {
        m1=(n+m)/2 ;
        m2=(n+m)/2 +1;
        if(m1<m&&m2<m)
        {
            median=(ar1[m1]+ar1[m2]) /2;
        }
        else if(m1>m&&m2>m)
        {
            median=(ar2[m1]+ar2[m2]) /2;
        }
        else
        {
            median=(ar1[m1]+ar2[m2])/2;
        }

    }
    cout<<"The median is: "<<median<<endl;

}


int main()
{
    int ar1[] = {2, 3, 5, 8};
    int ar2[] = {10, 12, 14, 16, 18, 20 }; // change the arrays in the code only
    int m = sizeof(ar1) / sizeof(ar1[0]);  // kay thanks bye.
    int n = sizeof(ar2) / sizeof(ar2[0]);
    int median=0;
    FindMedian(ar1, ar2, m, n,median);

    return 0;
}
