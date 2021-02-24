#include <iostream>
using namespace std;

void Roman(int x)
{
    int a,b,c,d;

 a=x/1000;
 b=x%1000;
//---------------FOR A;----------------
 for(int i=0; i<a ; i++)
 {
     cout<<"M";
 }

c=b%100;
b/=100;


//---------------------------FOR B;-------------------
    if(b<4)
    {
        for(int i=0; i<b; i++)
        {

            cout<<"C";
        }

    }
    else if( b==4)
    {
        cout<<"CD";
    }
    else if(b>=5&&b<9)
    {
        cout<<"D";
        for(int i=0; i<b-5; i++)
        {
            cout<<"C";
        }
    }
    else if(b==9)
    {
        cout<<"CM";
    }

 d=c%10;
 c/=10;
//------------------------FOR C;-----------------------------
    if(c<4)
    {
        for(int i=0; i<c; i++)
        {

            cout<<"X";
        }

    }
    else if( c==4)
    {
        cout<<"XL";
    }
    else if(c>=5&&c<9)
    {
        cout<<"L";
        for(int i=0; i<c-5; i++)
        {
            cout<<"X";
        }
    }
    else if(c==9)
    {
        cout<<"XC";
    }
//---------------------------------FOR D-----------------------------------------
        if(d<4)
        {
            for(int i=0; i<d; i++)
            {

                cout<<"I";
            }

        }
        else if( d==4)
        {
            cout<<"IV";
        }
        else if(d>=5&&d<9)
        {
            cout<<"V";
            for(int i=0; i<d-5; i++)
            {
                cout<<"I";
            }
        }
        else if(d==9)
        {
            cout<<"IX";
        }
//--------------------------------------------------------------------------

}

int main() {
    int x;
   cout << "Enter a number between 1-3999" <<endl;
   cin>>x;
   Roman(x);
    return 0;
}
