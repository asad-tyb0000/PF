#include <iostream>
using namespace std;
bool isPrime(int number);
main()
{
    int number;
    bool final;
    cout << "Enter Number: ";
    cin >> number;
    final = isPrime(number);
    cout << final;
}
bool isPrime(int number)
{
    bool answer=true;
    if(number == 0 || number == 1)
    {
        answer = false;
        return answer;
    }
    else{
    for(int x = 2 ; x < number ; x++ )
    {
        if (number%x == 0)
        {
            answer = false;
        }
           
    }
    }
    return answer;
}