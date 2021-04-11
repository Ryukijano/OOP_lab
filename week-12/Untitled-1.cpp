#include<iostream>
using namespace std;

class matrix_145 {
    public:
    int row=0;
    int column=0;
    int a[10][10];
    public:
    matrix_145();
    matrix_145(int r,int c)
    {
        row=r;
        column=c;
    };
    void input_145()
    {
        cout<<"Enter the elements of the matrix";
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                cin>>a[i][j];
            }
        }
    };
    void display_145()
    {
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }
    };
};

int main() {
    int ro=0,co=0;
    cout<<"Samridha Das \n Roll No 1930145 \n ECSE3";
    cout<<"Program for calculation of matrix_145 Addition" ;
    cout<<"Enter the number of rows and columns";
    cin>>ro;
    cin>>co;
    matrix_145 matA(ro,co);
    matA.input_145();
    matA.display_145();
    matrix_145 matB(ro,co);
    matB.input_145();
    matB.display_145();
    addition add(matA,matB);
};
class addition:public matrix_145{
    matrix_145 m3;
    public:
     addition(matrix_145 m1,matrix_145 m2) {
            cout << "After addition";
            for(int i = 0; i < row; i++) {
                for (int j = 0; j < column; j++) {
                    m3[i][j]= m1[i][j] + m2[i][j];
                    cout << m3[i][j] << "\t";
                }
                cout << endl;
            }
        }
};