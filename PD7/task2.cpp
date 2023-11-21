#include <iostream>
using namespace std;
void printStars(int rowSize);
main()
{
    int rowSize;
    cout << "Enter desired number of rows: ";
    cin >> rowSize;
    printStars(rowSize);
}
void printStars(int rowSize)
{
    for(int row = rowSize ;row >0 ; row--)
    {
        for (int col = row-1 ; col > 0 ; col--)
        {
            cout << " ";
        }
            
        for(int nextLine = (rowSize/2)+1 ; nextLine >= row-1 ; nextLine--)
        {
            cout << "+";
            
        }
        
        cout << endl;
    }
    for(int row = 1 ; row <= rowSize ; row++)
    {
        for (int  col = 1 ;col <= row-1 ; col++)
        {
            cout << " ";
        }
            
        for(int nextLine = (rowSize/2)+1 ; nextLine >= row-1 ; nextLine--)
        {
            cout << "+";
            
        }
        
        cout << endl;
    }
}