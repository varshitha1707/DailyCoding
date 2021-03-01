#include <iostream>
using namespace std;

int substring(string s1,string s2)
{
    int s1len = s1.length();
    int s2len = s2.length();

    for(int i =0; i<=s2len-s1len; i++)
    {
        int j;
        for( j=0; j<s1len; j++)
            if(s2[i+j]!=s1[j])
                break;

        if (j == s1len)
            return i;
    }
    return -1;

}

int main()
{
    string s1 = "eeks";
    string s2 = "geeks";
    int res= substring(s1,s2);
    if(res==-1)
        cout<<"not present";
    else
        cout<<"present at index"<< res;
    return 0;
}
