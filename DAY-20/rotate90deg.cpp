#include <iostream>
using namespace std;

class matrix
{
    int row, col;
    int mat[10][10];

public:
   void getdata();
   void rotate90deg();
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
}


void matrix  :: rotate90deg()
{
cout<<"The rotated matrix is: \n";
    for (int j = 0; j < col; j++)
    {
        for (int i = row - 1; i >= 0; i--)
            cout << mat[i][j] << " ";
        cout << '\n';
    }
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
    m1.rotate90deg();
}
