#include <iostream>
using namespace std;

class matrix
{
    int row, col;
    int mat[10][10];

public:
    void getdata();
    void display();
    void add(matrix x, matrix y);
    void sub(matrix x, matrix y);
    void multi(matrix x, matrix y);

}m1,m2,m3;

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

void matrix ::add(matrix x,matrix y)
{
    if(x.row == y.row && x.col == y.col)
    {
        for(int i = 0; i < x.row; i++)
        {
            for(int j = 0; j < y.col; j++)
            {
                mat[i][j] = x.mat[i][j] + y.mat[i][j];
            }
        }
        cout<<"Matrix added successfully! \n Below is the resultant matrix.\n";
        for(int i = 0; i < x.row; i++)
        {
            for(int j = 0; j < y.col; j++)
            {
                cout<<mat[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    else
        cout<<"Matrix cannot be added!\n";
}

void matrix ::sub(matrix x,matrix y)
{
    if(x.row == y.row && x.col == y.col)
    {
        for(int i = 0; i < x.row; i++)
        {
            for(int j = 0; j < y.col; j++)
            {
                mat[i][j] = x.mat[i][j] - y.mat[i][j];
            }
        }
        cout<<"Matrix subtracted successfully! \n Below is the resultant matrix.\n";
        for(int i = 0; i < x.row; i++)
        {
            for(int j = 0; j < y.col; j++)
            {
                cout<<mat[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    else
        cout<<"Matrix cannot be subtracted!\n";
}

void matrix::multi(matrix x, matrix y)
{

    if(x.col==y.row)
    {
        for(int i = 0; i < x.row; i++)
        {
            for(int j = 0; j < y.col; j++)
            {
                mat[i][j]=0;
                for(int k=0; k < x.col ; k++)
                {
                    mat[i][j]+=  (x.mat[i][k] * y.mat[k][j]) ;
                }
            }
        }
        cout<<"Matrix multiplied successfully! \n Below is the resultant matrix.\n";
        for(int i = 0; i < x.row; i++)
        {
            for(int j = 0; j < y.col; j++)
            {
                cout<<mat[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    else
        cout<<"matrix cannot be multiplied.";
}


int main() {
    int ch1=0;

    cout << "\n MENU: \n"
         << "1. ADD \n"
         << "2. SUBTRACT \n"
         << "3. MULTIPLY \n"
         << "4. EXIT\n"
         << endl;

    while (ch1 != 4) {
        cout << "\n enter your choice:  \n";
        cin >> ch1;

        switch (ch1) {
            case 1: {
                m1.getdata();
                m2.getdata();
                m1.display();
                m2.display();

                m3.add(m1, m2);
                m3.display();
            }
                break;
            case 2: {
                m1.getdata();
                m2.getdata();
                m1.display();
                m2.display();
                m3.sub(m1, m2);
                m3.display();

            }
                break;
            case 3: {
                m1.getdata();
                m2.getdata();
                m1.display();
                m2.display();
                m3.multi(m1, m2);
                m3.display();

            }
                break;
            default: {
                cout << "\nEnding\n";
            }

        }
    }
}



