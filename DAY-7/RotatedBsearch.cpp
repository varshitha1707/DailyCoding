#include <iostream>
using namespace std;


int binarySearch(int ar[], int low,
                 int high, int key)
{
    if (high < low)
        return -1;

    int mid = (low + high) / 2;
    if (key == ar[mid])
        return mid;

    if (key > ar[mid])
        return binarySearch(ar, (mid + 1), high, key);


    return binarySearch(ar, low, (mid - 1), key);
}

int Pivot(int arr[], int low, int high)
{
    if (high < low)
        return -1;
    if (high == low)
        return low;

    int mid = (low + high) / 2;
    if (mid < high && arr[mid] > arr[mid + 1])
        return mid;

    if (mid > low && arr[mid] < arr[mid - 1])
        return (mid - 1);

    if (arr[low] >= arr[mid])
        return Pivot(arr, low, mid - 1);

    return Pivot(arr, mid + 1, high);
}

int pivotedBinarySearch(int arr[], int n, int key)
{
    int pivot = Pivot(arr, 0, n - 1);

    if (pivot == -1)
        return binarySearch(arr, 0, n - 1, key);

    if (arr[pivot] == key)
        return pivot;

    if (arr[0] <= key)
        return binarySearch(arr, 0, pivot - 1, key);

    return binarySearch(arr, pivot + 1, n - 1, key);
}

int main()
{

    int n ;
    cout<<"enter n";
    cin>>n;
    int arr1[n];

    cout<<"enter elements:";
    for(int i=0; i<n;i++)
    {
        cin>>arr1[i];
    }
    int key;
    cout<<"Enter key:";
    cin>>key;

    cout << "Index of the element is : "
         << pivotedBinarySearch(arr1, n, key);

    return 0;
}