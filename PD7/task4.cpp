#include <iostream>
using namespace std;
int triangleDots(int number);
main()
{
    int number,answer;
    cout << "Enter number of Triangle: ";
    cin >> number;
    answer = triangleDots(number);
    cout << "Dots in the Triangle: " << answer;
}
int triangleDots(int number)
{
    int sum = 0;
    for (int x=number ; x>=1;x=x-1)
    {
        sum = sum + x;
    }
    return sum;
}