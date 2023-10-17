#include <iostream>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);
main ()
{
    int holidays,hometownWeekends,answer;
    string yearType;
    cout << "Enter year type: ";
    cin >> yearType;
    cout << "Enter number of holidays: ";
    cin >> holidays;
    cout << "Enter number of weekends: ";
    cin >> hometownWeekends;
    answer = calculateVolleyballGames(yearType,holidays,hometownWeekends);
    cout << answer;
}
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    int final;
    int sum;
    if(yearType == "normal")
    {
        sum = (hometownWeekends*(0.75) + holidays * (0.67));
        sum = (sum + (48 - (48*0.15)))-((sum + (48 - (48*0.15)))*0.15);
        if ( sum >= 44)
            {
                final = sum + 1;
            }
        else{
            final = sum + 1;
        }
    }
    if(yearType == "leap")
    {
        sum = (hometownWeekends*(0.75) + holidays * (0.67));
        final = (sum + (48 - (48*0.15)))+1;    
    }
    return final;
}