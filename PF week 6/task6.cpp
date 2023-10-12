#include <iostream>
using namespace std;
float discount(string day,string month,float amount);

main()
{
    string day,month;
    float amount,answer;
    cout << "Enter Purchase Day: ";
    cin >> day;
    cout << "Enter Purchase Month: ";
    cin >> month;
    cout << "Enter Purchase Amount: ";
    cin >> amount;
    answer = discount(day,month,amount);
    cout << "Payable Amount after discount: " << answer;
}

float discount(string day,string month,float amount)
{
    float final;
    final = amount;
    if ((day == "Sunday") || (month == "October"))
    {
        
        
            final = amount - (amount * 10 / 100);
            return final;
        
        
    }
    return final;
}