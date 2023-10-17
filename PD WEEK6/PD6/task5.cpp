#include <iostream>
using namespace std;
float calculateFruitPrice(string fruit,string dayOfWeek,double quantity);
main()
{
    string fruit,dayOfWeek;
    float answer;
    double quantity;
    cout << "Enter the fruit name: ";
    cin >> fruit;
    cout << "Enter the day of the week (e.g., Monday, Sunday): ";
    cin >> dayOfWeek;
    cout << "Enter the quantity: ";
    cin >> quantity;
    answer = calculateFruitPrice(fruit,dayOfWeek,quantity);
    if (dayOfWeek == "Sunday" || dayOfWeek == "Saturday" || dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Wednesday" || dayOfWeek == "Thursday" || dayOfWeek == "Friday" )
    {
        cout << answer;
    }
    if (dayOfWeek != "Sunday" && dayOfWeek != "Saturday" && dayOfWeek != "Monday" && dayOfWeek != "Tuesday" && dayOfWeek != "Wednesday" && dayOfWeek != "Thursday" && dayOfWeek != "Friday" )
    {
        cout << "error";
    }
}
float calculateFruitPrice(string fruit,string dayOfWeek,double quantity)
{
    float final;
    if (dayOfWeek == "Sunday" || dayOfWeek == "Saturday")
    {
        if(fruit == "banana")
        {
            final = quantity*2.70;
        }
        if (fruit == "apple")
        {
            final = quantity*1.25;
        }
        if (fruit == "orange")
        {
            final = quantity*0.90;
        }
        if (fruit == "grapefruit")
        {
            final == quantity*1.60;
        }
        if (fruit == "kiwi")
        {
            final = quantity*3.00;
        }
        if (fruit == "pineapple")
        {
            final = quantity*5.60;
        }
        if (fruit == "grapes")
        {
            final = quantity*4.20;
        }
    }
    if(dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Wednesday" || dayOfWeek == "Thursday" || dayOfWeek == "Friday" )
    {
        if(fruit == "banana")
        {
            final = quantity*2.50;
        }
        if (fruit == "apple")
        {
            final = quantity*1.20;
        }
        if (fruit == "orange")
        {
            final = quantity*0.85;
        }
        if (fruit == "grapefruit")
        {
            final == quantity*1.45;
        }
        if (fruit == "kiwi")
        {
            final = quantity*2.70;
        }
        if (fruit == "pineapple")
        {
            final = quantity*5.50;
        }
        if (fruit == "grapes")
        {
            final = quantity*3.85;
        }
    }
    return final;
}
