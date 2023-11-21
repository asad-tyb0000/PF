#include <iostream>
using namespace std;
void numberAmplified(int number);
main()
{
    int number;
    cout << "Enter the number to amplify: ";
    cin >> number;
    numberAmplified(number);
}
void numberAmplified(int number)
{
    int i=0;
    int x=1;
    int n=0;
    while(i<number)
    {
        cout << x;
        if(i != number-1)
        {
            cout << ", ";
        }
        x=x+1;
        if(x%4==0)
        {
            n = x *10;
            cout << n << ", ";
            x=x+1;
            i=i+1;
        }
        i=i+1;
    }
}