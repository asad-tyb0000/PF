#include <iostream>
using namespace std;
int main()
{
    int size = 4;
    int matrix[size][size];
    cout << "Enter the elements of the matrix:" << endl;
    for(int x=0 ; x<size ; x++)
    {
        for(int y = 0 ; y<size; y++)
        {
            cout << "Enter element at position [" << x << "][" << y << "]: ";
            cin >> matrix[x][y];
        }
    }
    cout << "The matrix you entered is:" << endl;
    for(int a=0 ; a<size;a++)
    {
        for(int b=0; b<size;b++)
        {
            cout << matrix[a][b] <<"\t" ;
        }
        cout << endl;
    }
    int final=0;
    for(int p=0 ; p < size; p++ )
    {
        for(int q=0 ; q < size ; q++)
        {
            if(p==q)
            {
                if(matrix[p][q]==1)
                {
                    final = 1;
                }
                else
                {
                    final = 0;
                }
            }
            else{
                if(matrix[p][q]==0)
                {
                    final = 1;
                }
                else
                {
                    final = 0;
                }
            }
        }
    }
    
    if(final == 1)
    {
        cout << "The entered matrix is an identity matrix.";
    }
    else{
        cout << "The entered matrix is NOT an identity matrix.";
    }
}

