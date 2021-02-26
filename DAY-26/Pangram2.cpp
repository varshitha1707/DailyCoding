#include <bits/stdc++.h>
using namespace std;

void Pangram(char *str)
{
    char freq[26] = { 0 };
    int len = strlen(str);

    for (int i = 0; i < len; i++)
        freq[str[i] - 'a']=str[i]; //   18=s

    for (int i = 0; i < 26; i++)
        if (freq[i] == 0 ) {
            cout<< (char)(i + 'a');
        }
}

int main()
{
       char str[] = "The quick brown fox jumps over the dog";
       cout<<"The character that can make the string a Pangram are:"<<endl;
       Pangram(str);
    return 0;
}
