#include <bits/stdc++.h>
using namespace std;

bool areEqual(int arr1[], int arr2[], int n, int m)
{
    if (n != m)
        return false;

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr1[i]]++;

    for (int i = 0; i < n; i++) {
        if (mp.find(arr2[i]) == mp.end())
            return false;

        if (mp[arr2[i]] == 0)
            return false;

        mp[arr2[i]]--;
    }

    return true;
}

int main()
{
    int arr1[] = { 3, 5, 2, 5, 2 };
    int arr2[] = { 2, 3, 5, 5, 2 };
    int n = sizeof(arr1) / sizeof(int);
    int m = sizeof(arr2) / sizeof(int);

    if (areEqual(arr1, arr2, n, m))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
