#include <iostream>
using namespace std;
int main()
{
    int row;
    int n1,n2,n3;
    int max = 0;
    int column ;
    cout << "Enter row size: ";
    cin >> row;
    int array[row][5];
    cout << "Enter the elements of the matrix:"<<endl;
    for(int x=0;x<row;x++)
    {
        for(int y=0;y<5;y++)
        {
            cout << "Enter element at position [" << x << "][" << y << "]: ";
            cin >> array[x][y];
        }
    }
    cout << endl;
    cout << "Original Matrix:" << endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout << array[i][j] << "\t";
            if(i<1)
            {
                if(array[i][j] + array[i+1][j] + array[i+2][j] > max)
                {
                    max = array[i][j] + array[i+1][j] + array[i+2][j];
                    column = j;
                }
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Matrix after largest column moved to first:" <<endl;
    if(column!=0)
    {
        n1=array[0][0];
        n2=array[1][0];
        n3=array[2][0];
        array[0][0]=array[0][column];
        array[1][0]=array[1][column];
        array[2][0]=array[2][column];
        array[0][column]=n1;
        array[1][column]=n2;
        array[2][column]=n3;
    }
    for(int l=0;l<row;l++)
    {
        for(int m=0;m<5;m++)
        {
            cout << array[l][m] << "\t";
        }
        cout << endl;
    }
    

}