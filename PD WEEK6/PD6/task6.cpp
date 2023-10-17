#include <iostream>
using namespace std;
string calculateHotelPrices(int days,string month);
main()
{
    int days;
    string month;
    string answer;
    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> days;
    answer = calculateHotelPrices(days,month);
    cout << answer;
}
string calculateHotelPrices(int days,string month)
{
   
    float realAmountStudio,studio;
    float realAmountApartment,apartment;
    string final;
    if (month == "May" || month == "October")
    {
        realAmountStudio = 50 * days;
        realAmountApartment = 65 * days;
        studio = realAmountStudio;
        apartment = realAmountApartment;
        if (days >7 && days<=14)
        {
            studio = realAmountStudio - (realAmountStudio * 5 / 100);
            apartment = realAmountApartment; 
        }
        if (days > 14 )
        {
            studio = realAmountStudio - (realAmountStudio * 30 / 100);
            apartment = realAmountApartment - (realAmountApartment * 10 / 100);
        }
        
    }
    if (month == "June" || month == "September")
    {
        realAmountStudio = 75.20 * days;
        realAmountApartment = 68.70 * days;
        studio = realAmountStudio;
        apartment = realAmountApartment;
        if (days > 14)
        {
            studio = realAmountStudio - (realAmountStudio * 20 / 100);
            apartment = realAmountApartment - (realAmountApartment * 10 / 100);
        }
    }
    if (month == "July" || month =="August")
    {
        realAmountStudio = 76 * days;
        realAmountApartment = 77 * days;
        studio = realAmountStudio;
        apartment = realAmountApartment;
        if(days > 14)
        {
            apartment = realAmountApartment - (realAmountApartment * 10 / 100);
        }
    }
    return "Apartment: " + to_string(apartment) + "$.+\nStudio: "  + to_string(studio) + "$.";
}