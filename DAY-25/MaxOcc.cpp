#include <bits/stdc++.h>
using namespace std;

char getMaxOccurringChar(char str[])
{
   int freq[26] = { 0 };
    int max = -1;
    char result;
    int len = strlen(str);

    for (int i = 0; i < len; i++)
        freq[str[i] - 'a']++;

    for (int i = 0; i < 26; i++)
        if (max < freq[i]) {
            max = freq[i];
            result = (char)(i + 'a');
        }

    return result;
}

int main()
{
    char str[] = "sample program";
    cout << "Maximum occurring character = "
         << getMaxOccurringChar(str);
    return 0;
}
