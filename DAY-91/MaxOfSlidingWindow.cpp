#include <iostream>
#include<bits/stdc++.h>

using namespace std;

queue <int> q;

void maxOfSlidingWindow (int k, int arr[], int n) { //1, 2, 3, 1, 4, 5, 2, 3, 6
    
    int max = 0;
    
    for(int i = 0; i<=n; i++) {
        
        if (i > 2) {
            q.pop();
            cout<<max<< " ";

            
        }
        
        if(q.empty()){
            q.push(arr[i]);
            max = q.front();
        } else {
            if (arr[i] > max) {
            
                max = arr[i];
            }
            
            q.push(arr[i]);
        }
        
    }
    
    
}

int main()
{
    
    int arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int k = 3;
    
    maxOfSlidingWindow(k, arr, n);
    
    return 0;  
}