#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void FindExtra(int arr1[], int arr2[], int n){

    for(int i=0; i<n; i++ )
    {
        if(arr1[i]!=arr2[i])
        {
            cout<< i<<" ";
            break;
        }
    }

}

int main() {
    int arr1[] = {2, 4, 6, 8, 9, 10, 12};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {2, 4, 6, 8, 10, 12};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int n = max(n1,n2);
    FindExtra(arr1,arr2,n);

    return 0;
}
