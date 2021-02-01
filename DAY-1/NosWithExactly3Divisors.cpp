#include <iostream>
using namespace std;

void Ex3Div(int N)
{
    int flag;
    for(int i=2; i<=N; i++)
    {
        flag=1;
        for(int j=2; j<=i/2; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
            if (flag == 1)
            {
                if(i*i<=N)
                {
                    cout<<"\n";
                    cout<<i*i ;
                }
            }
    }
}

int main() {
    int N;
    cout << "Enter N" << endl;
    cin>> N;
    cout<<"The numbers which have exactly 3 divisors are:";
    Ex3Div(N);
    return 0;
}
