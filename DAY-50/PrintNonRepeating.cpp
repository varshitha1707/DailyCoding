#include <iostream>
#include <unordered_map>
using namespace std;

void Print(int arr[], int size)
{
    int temp;
    temp=arr[0];

    unordered_map<int, int> umap;
    for (int i = 0; i < size; i++)
        umap[arr[i]]++;


    for (int i = 0; i < size; i++) {
        if (umap[arr[i]] == 1)
            cout << arr[i]<<" ";
    }
}
int main() {
   cout << "The non repeating elements: " <<endl;
    int arr[]={3,2,1,2,1,4,5,8,6,7,4,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    Print(arr, size);

    return 0;
}
