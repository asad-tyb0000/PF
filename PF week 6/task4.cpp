#include <iostream> 
#include <windows.h>
using namespace std;
int findGreatest(int n1,int n2,int n3);

main ()
{
    int n1,n2,n3,answer;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    cout << "Enter the third number: ";
    cin >> n3;
    answer = findGreatest(n1,n2,n3);
    cout << "The greatest number among " << n1 << ", " << n2 << ", and "<< n3 << " is: " << answer; 
}

int findGreatest(int n1,int n2,int n3)
{
    
    if (n1>n2 && n1>n3)
    {
            return n1;
         
    }
    
     if (n2>n1 && n2>n3)
     {
         return n2;
     }
        
    if (n3>n1 && n3>n2)
     {
            return n3;
     }
        
       
    
}