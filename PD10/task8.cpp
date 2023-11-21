#include <iostream>
using namespace std;
main()
{
    int number;
    int count = 0;
    int result;
    cout << "Enter the length of the array: ";
    cin >> number;
    string rot[number];
    cout << "Enter the elements of the array (\"left\" or \"right\"): " << endl;
    for (int x = 0 ; x<number ; x++)
    {
        cin >> rot[x];
        if(rot[x] == "right")
        {
            count = count + 90;
        }
        if(rot[x] == "left")
        {
            count = count - 90;
        }
    }

    result = count / 360;
        cout << "Number of full rotations: " << result ;
}