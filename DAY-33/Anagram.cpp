#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void CheckAnagram(string s1, string s2)
{

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        if((s1.compare(s2)) == 0)
            cout<<"\n ANAGRAM \n";
        else
        {
            cout<<"\n NOT AN ANAGRAM OF EACH OTHER \n";
        }


}

int main() {
    string s1,s2 ;
    cout<<"\nEnter the first string : ";
    cin>>s1;
    cout<<"\nEnter the second string : ";
    cin>>s2;
    CheckAnagram(s1,s2);

    return 0;
}
