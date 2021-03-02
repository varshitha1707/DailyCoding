#include <iostream>
using namespace std;

bool areRotations(string str1,string str2)
{
    string temp = str1+str1;
    int len2 = str2.length();
    int lentemp = temp.length();

    for(int i =0; i<= lentemp- len2; i++)
    {
        int j;
        for( j=0; j<len2; j++)
            if(temp[i+j]!=str2[j])
                break;

        if (j == len2)
            return i;
    }
    return -1;

}
int main() {
    string str1 ;
    cout<<"Enter string 1:"<<endl;
    cin>>str1;
    string str2;
    cout<<"Enter string 2: "<<endl;
    cin>>str2;
    int res=areRotations(str1,str2);
    if(res==-1)
        cout<<"False";
    else
       cout<<"True";

    return 0;
}
