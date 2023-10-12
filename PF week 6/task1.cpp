#include <iostream>
using namespace std;
int greaterNumber(int n1,int n2);

main()
{
    int answ;
    int n1,n2;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    answ=greaterNumber(n1,n2);
    cout << answ;
}

int greaterNumber(int n1,int n2)
{
    int answer;
    if (n1>n2)
    {
        answer = 1;
    }
    else 
    {
        answer = 0;
    }
    return answer;
}
