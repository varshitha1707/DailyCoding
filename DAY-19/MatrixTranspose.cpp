#include <iostream>
using namespace std;

class matrix
{
    int row, col;
    int mat[10][10];

public:
   void getdata();
   void transpose();
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


void matrix  :: transpose()
{

    cout << "\nTranspose of Matrix: " << endl;
    for (int i = 0; i < col; ++i)
        for (int j = 0; j < row; ++j) {
            cout << " "<< mat[j][i];
            if (j == row - 1)
                cout << endl;
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
    m1.transpose();
}
