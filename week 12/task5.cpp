#include <iostream>
using namespace std;
bool isIdentity(int matrix[3][3]);
int main()
{
    int size = 3;
    int matrix[3][3];
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
    int answer=isIdentity(matrix);
    if(answer == 1)
    {
        cout << "The entered matrix is an identity matrix.";
    }
    else{
        cout << "The entered matrix is NOT an identity matrix.";
    }
}

bool isIdentity(int matrix[3][3])
{
    if(matrix[1][1]==1&&matrix[0][0]==1&&matrix[2][2]==1&&matrix[2][1]==0&&matrix[2][0]==0&&matrix[1][2]==0&&matrix[1][0]==0&&matrix[0][2]==0&&matrix[0][1]==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}