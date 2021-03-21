#include <iostream>
#include <unordered_map>
using namespace std;

int maxdist(int arr[], int size)
{
    int dist=0;
    unordered_map<int, int> umap;
    for(int i=0;i<size;i++)
    {
        if (umap.find(arr[i]) == umap.end())
            umap[arr[i]]=i;
        else
            dist = max(dist,i-umap[arr[i]]);
    }
    return dist;
}

int main() {

    int arr[]={3,2,1,2,1,4,5,8,6,7,4,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"the max distance is: "<<maxdist(arr,size);

    return 0;
}
