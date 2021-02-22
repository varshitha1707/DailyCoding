#include <iostream>
using namespace std;

class matrix
{
    int row, col,x;
    int mat[10][10];

public:
    void getdata();
    void search();
    void display();

}m1;

void matrix  ::getdata()
{

    cout<<"Number of rows: ";
    cin>>row;
    cout<<"Number of columns: ";
    cin>>col;
    cout<<"Enter the elements: ";

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin>>mat[i][j];
        }
    }
    cout<<"\n";
    cout<<"\nenter element to be found: ";
    cin>>x;
}


void matrix  :: search()
{
    int i, j,flag;

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(mat[i][j]==x)
                cout<<"Element found at\t"<<i<<" , "<<j;
            flag=0;
        }
        cout<<endl;
    }

    if(flag!=0)
        cout<<"\nelement not found";

}

void matrix ::display()
{
    int i, j;
    cout<<"Matrix is:"<<endl;

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int main()
{
    m1.getdata();
    m1.display();
    m1.search();
}
