#include <iostream>
using namespace std;
int main()
{
    // add1 = array to store the sum of the columns
    // arr = array to store the data of the vertices
    int add1[4] = {0};
    int arr[4][4];
    for(int x = 0 ; x<4 ; x++)
    {
        for(int y = 0 ; y<4 ; y++)
        {
            cin >> arr[y][x];
        }
    }

    for(int x = 0 ; x<4 ; x++)
    {
        for(int y = 0 ; y<4 ; y++)
        {
            add1[x] = add1[x] + arr[y][x];
        }
    }

    // prints the output
    
    for(int z = 0 ; z<4 ; z++)
    {
        if(add1[z] < 3 && add1[z] > 0)
        {
            cout << "edge " << z+1 << " appears 1 times!";
            cout << endl;
        }
        else if(add1[z] == 0 )
        {
            cout << "edge " << z+1 << " appears 0 times!";
            cout << endl;
        }
        else
        {
            cout << "invalid input!";
            cout << endl;
        }
    }
}







