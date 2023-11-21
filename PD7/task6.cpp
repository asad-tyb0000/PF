#include <iostream>
using namespace std;
int primorial(int number);
main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    primorial(number);
}
int primorial(int number)
{
    for(int x=1;x<=number;x++)
    {
        if(x%2!=0 || x%3!=0 || x%5!=0)
        {
            cout << 0 << " ";
        }

    }
}