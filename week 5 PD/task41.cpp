#include <iostream>
using namespace std;
float projecttimecalculation(float days,float workers);
main()
{
    float reqhours,days,workers,thours;
    int pdifference,fdifference;
    cout << "Enter the needed hours: ";
    cin >> reqhours;
    cout << "Enter the days the firm has: ";
    cin >> days;
    cout << "Enter the number of all workers: ";
    cin >> workers;
    thours = projecttimecalculation(days,workers);
    
    
    if (reqhours > thours)
    {
        pdifference = reqhours - thours;
        cout << "Not enough time! " << pdifference << " hours needed." << endl;
    }
    
    if (reqhours <= thours)
    {
        fdifference = thours - reqhours;
        cout << "Yes!" << fdifference << " hours left.";
    }
}
float projecttimecalculation(float days,float workers)
{   float totalhours,hours;
    hours = days * (workers*10);
    totalhours = (hours)-((hours*10) /100);
    return totalhours; 
}