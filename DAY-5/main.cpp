#include <iostream>
using namespace std;

int main()
{
    int array[8];
    int max;
    int max2;
    cout << "Enter the array";
    for(int i=0; i<8;i++)
    {
        cin>>array[i];


    }
    max=array[0];

    for(int j=0; j<8; j++)
    {
        if(array[j]>max)
        {
            max = array[j];
        }

    }
    max2=max-1;
    int temp= max-max2;
    int dist,dist2,final_dist,result;

    for(int k=0; k<8;k++)
    {
        if(array[k]==max)
            int dist=k;

    }
    for(int l=0; l<8;l++)
    {
        if(array[l]==max2)
            int dist2=l;

    }

    final_dist=dist-dist2;

    for(int o=max2; o<max; o++)
    {
        result+=(max2*final_dist)-array[o];
    }

    cout<<result<<" ";


    // {3,2,1,3,2,1,0,4}
    return 0;
}
