#include <iostream>
using namespace std;
int parityAnalysis(int number);

main()
{
    int number,answer;
    cout << "Enter a 3-digit number: ";
    cin >> number;
    answer = parityAnalysis(number);
    cout << answer;

}

int parityAnalysis(int number)
{
    int number1,number2,number3,fnumber;
    bool final;
    number1 = number % 10;
    number = number / 10;
    number2 = number % 10;
    number = number / 10;
    number3 = number % 10;
    fnumber = number1 + number2 + number3;
    if (number % 2 == fnumber % 2 ) 
    {
        final = true;
    }
    else
    {
        final = false;
    }
    return final;
}