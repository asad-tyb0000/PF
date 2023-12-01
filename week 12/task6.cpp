#include <iostream>
using namespace std;
int main()
{
    int n1;
    int n2;
    string location;
    string array[5][5]={
    {".",".",".","*","*"},
    {".","*",".",".","."},
    {".","*",".",".","."},
    {".","*",".",".","."},
    {".",".","*","*","."}};
    cout << "Enter coordinates to fire torpedo (e.g., A1, B3, E5): ";
    cin >> location;
    n1=location[0] ;
    n1 = n1 - 65;
    n2=location[1] ;
    n2 = n2 - '1';
    if(array[n1][n2]==".")
    {
        cout << "Result: splash";
    }
    else{
        cout << "Result: BOOM";
    }
    
}