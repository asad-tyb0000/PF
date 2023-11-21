#include <iostream>
using namespace std;
main()
{
    int array_length , cycle_length;
    bool result = false;
    cout << "Enter the length of the arrays: ";
    cin >> array_length;
    int array[array_length];
    cout << "Enter elements of the array:" << endl;
    for(int x=0 ; x<array_length ; x++)
    {
        cin >> array[x];

    }
    cout << "Enter the length of the cycle: ";
    cin >> cycle_length;
    if(array_length < cycle_length)
    {
        result = true;
    }
    else
    {
        for(int y=1 ; y+cycle_length <= array_length ; y++)
        {
            if(array[y]==array[y+cycle_length])
            {result = true;}
            
        }
    }

    cout << "Output: " << result;
}