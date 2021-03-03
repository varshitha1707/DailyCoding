#include <iostream>
using namespace std;

int longSubstring(string s1)
{
    int s1len = s1.length();
    char aseem = s1[0];
    int i = 0;
    int vari=0;

    while (i<=s1len)
    {
        if (s1[i] != aseem) {
            vari++;
            i++;
        } else {
            aseem = s1[i];
            s1len = s1len - i; //geeksforgeeks
            i=i+1;
            vari = 0;
        }
    }

    return vari;
}

int main()
{
    string s1;
    cout<<"Your String: \n";
    cin>>s1;

    int res= longSubstring(s1);
    cout<<"Length of longest substring is: "<<res;
    return 0;
}