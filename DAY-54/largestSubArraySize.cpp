#include <bits/stdc++.h>
using namespace std;

vector< pair<int, int> > findSubArrays(int arr[], int n)
{
   unordered_map<int, vector<int> > map;

    vector <pair<int, int>> out;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sum == 0)
            out.push_back(make_pair(0, i));

        if (map.find(sum) != map.end())
        {
            vector<int> vc = map[sum];
            for (auto it = vc.begin(); it != vc.end(); it++)
                out.push_back(make_pair(*it + 1, i));
        }

        map[sum].push_back(i);
    }

    return out;
}

void print(vector<pair<int, int>> out)
{
    int temp =0;
    cout<<"All subarrays: "<<endl;
    for (auto it = out.begin(); it != out.end(); it++)
    {
        int front = it->first;
        int end = it-> second;
        //int sizer = end-front;

        int temp1=end-front+1;
        if(temp1>temp)
            temp=temp1;

        cout<<"("<<front<<" "<< end<<")"<<endl;
    }

    cout<<"The largest subarray size is:" <<temp;
}

int main()
{
    int arr[] = {15, -2, 2, -8, 1, 7, 10, 23};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<pair<int, int> > out = findSubArrays(arr, n);

    if (out.size() == 0)
        cout << "No subarray exists";
    else
        print(out);

    return 0;
}
