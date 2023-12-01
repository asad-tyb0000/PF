#include <iostream>
using namespace std;
int main()
{
    int row_size;
    cout << "Enter row size: ";
    cin >> row_size;
    int Sum[row_size][3];
    cout << "Enter the elements of the matrix:" << endl;
    int sum = 0;
    for(int x=0 ; x<row_size ; x++)
    {
        for(int y = 0 ; y<3; y++){
        cout << "Enter element at position [" << x << "][" << y << "]: ";
        cin >> Sum[x][y];
        sum = sum + Sum[x][y];
        }
    }
    cout << "The sum of elements in the matrix is: " << sum ;
}