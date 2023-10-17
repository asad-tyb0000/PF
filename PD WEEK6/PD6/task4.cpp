#include <iostream>
using namespace std;
float amount(float min,char time,char account);
string servicetype(char account);
main()
{
    char account,time;
    float min;
    string answer1;
    float answer2;
    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> account;
    if ( account == 'p' || account == 'P')
    {
        cout << "Enter time of the call (D/d for day, N/n for night): ";
        cin >> time;
    }
    cout << "Enter the number of minutes used: ";
    cin >> min;
    answer1 = servicetype(account);
    answer2 = amount(min,time,account);
    cout << "Service Type: " << answer1 << endl;
    cout << "Total Minutes Used: " << min << " minutes" << endl;
    cout << "Amount Due: $" << answer2 << endl;

}
string servicetype(char account)
{
    string stype;
    if(account == 'P' || account == 'p')
    {
        stype = "Premium"; 
    }
    if(account == 'R' || account == 'r')
    {
        stype = "Regular"; 
    }
    return stype;
}
float amount(float min,char time,char account)
{
    float final;
    
    
    
    if (account == 'R' || account == 'r')
    {
        if (min <= 50)
        {
            final = 10;
        }
        else{
            min = min - 50;
            final = 10 + (0.20 * min);
        }
        return final;
    }
    if (account == 'P' || account == 'p')
    {
        if (time == 'D' || time == 'd')
        {
            if (min <= 75)
            {
                final = 25;
            }
            else{
                min = min - 75;
                final = 25 + (0.10 * min);
            }
            return final;
        }
        if (time == 'N' || time == 'n')
        {
            if (min <= 100)
            {
                final = 25;
            }
            else{
                min = min - 100;
                final = 25 + (0.05 * min);
            }
            return final;
        }
    }
    
}