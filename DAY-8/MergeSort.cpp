#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{

    int size1 = m - l + 1;
    int size2 = r - m ;

    int temp1[size1];
    int temp2[size2];

    for (int i = 0; i < size1; i++)
    {
        temp1[i] = arr[l+i];

    }

    for (int j = 0; j < size2; j++)
    {
        temp2[j] = arr[m + 1 + j];//yaha dekh
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i < size1 && j < size2) {

        if (temp1[i] <= temp2[j])
        {
            arr[k] = temp1[i];
            i++;
        }
        else
        {
            arr[k] = temp2[j];
            cout<<"hanji";
            j++;
        }
        k++;
    }
    while(i<size1)
    {
        arr[k]=temp1[i];
        i++;
        k++;
    }

    while(j<size2)
    {
        arr[k]=temp2[j];
        j++;
        k++;
    }

}

void mergeSort(int arr[],int l,int r) {

    if (r>l) {
        int m = l + (r-1)/2;

        mergeSort(arr, l, m);

        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
    else
        return;


}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}


int main() {

    int n ;
    cout<<"Enter n";
    cin>>n;
    int arr[n];

    cout<<"Enter elements:";
    for(int a=0; a<n;a++)
    {
        cin>>arr[a];
    }
    cout<<"given array";
    printArray(arr, n);

    mergeSort(arr, 0, n - 1);
    cout<<"sorted:";
    printArray(arr, n);
    return 0;
}