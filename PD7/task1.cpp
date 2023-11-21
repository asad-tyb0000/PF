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
        for (int col = row ; col > 0 ; col--)
        {
            cout << "+";
        }
            cout << endl;
    }


}