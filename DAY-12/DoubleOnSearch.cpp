#include <iostream>
using namespace std;
void RepDub(int arr[], int n, int b)
{
    for(int i=0; i <n;i++)
    {
        if(b==arr[i])
        {
            b=b*2;
        }
    }
    cout<<b;


}

int main() {

    int n,b ;
    cout<<"enter n";
    cin>>n;
    int arr[n];

    cout<<"enter elements (sorted):";
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter b:";
    cin>>b;
    RepDub(arr, n, b);


    return 0;
}
