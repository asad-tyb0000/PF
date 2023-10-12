#include<iostream>
using namespace std;
int same(int n1,int n2,int n3);

main()
{
    int n1,n2,n3;
    int answer;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    cout << "Enter the third number: ";
    cin >> n3;
    answer = same(n1,n2,n3);
    cout << answer;
}

int same(int n1,int n2,int n3)
{
    bool final;
    if (n1 == n2 && n2 == n3 && n3 == n1)
    {
        final = true;
    }
    else 
    {
        final = false;
    }
    return final;
}