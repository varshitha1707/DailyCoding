#include <iostream>
using namespace std;

void ExcelName(int input)
{
    int a,b,c;

    a = input / 26;
    b = a/26;
    c = a%26;
    int rem = input % 26;
    if(input<=26)
   {
       cout<<char(a*26 + 64);
   }
   else
   {
       if (a <= 26)
       {
           if(rem==0)
           {
               a= a-1;
               cout<<char(a+64)<<char(26+64);
           }
           else {
                cout<<char(a+64)<<char(rem+64);

           }
       }
       else
       {
           if(rem==0)
           {
               cout<<char(b+64)<<char(26+64);

           }
           else
           {
               cout<<char(b+64)<<char(c+64)<<char(rem+64);

           }
       }
   }
}

int main() {
    int input;
    string output;
    cout<<"Enter input: ";
    cin>>input;
    ExcelName( input);
    return 0;
}
