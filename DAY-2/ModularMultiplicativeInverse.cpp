#include <iostream>
using namespace std;

int gcd(int a, int m)
{

    if (a == 0)
        return m;
    if (m == 0)
        return a;

    if (a == m)
        return a;

    if (a > m)
        return gcd(a-m, m);
    return gcd(a, m-a);
}

void mulinv(int x, int a, int m  )
{

    for(int x=1; x<m;x++)
    {
        int c= a*x;
        if(c%m == 1)
        {
            cout<<x;
            break;
        }
    }
}


int main()
{
    int x,a,m;
    cout<<"Enter a:\n";
    cin>>a;
    cout<<"Enter m:\n";
    cin>>m;

   if(gcd(a,m)==1)
   {
       cout<<"The modular multiplicative inverse of "<<a<<" and "<<m<<" is: ";
       mulinv( x, a, m);


   }

    return 0;
}
