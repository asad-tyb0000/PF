#include <iostream>
using namespace std;
string findZodiacSign(int day,string month);
main()
{
    int day;
    string month,answer;
    cout << "Enter the day of birth: ";
    cin >> day;
    cout << "Enter the month of birth (e.g., January, February): ";
    cin >> month;
    answer = findZodiacSign(day,month);
    cout << "Zodiac Sign: " << answer;
}
string findZodiacSign(int day,string month)
{
    string final;
    if ((day >= 19 && day <= 28 && month == "February") || (day >= 1 && day <= 20 && month == "March"))
    {
        final = "Pisces";
    }
    if ((day >= 20 && day <=31 && month == "January") || (day >= 1 && day <= 18 && month == "February"))
    {
        final = "Aquarius";
    }
    if ((day >= 22 && day <= 31 && month == "December") || (day >= 1 && day <= 19 && month == "January"))
    {
        final = "Capricorn";
    }
    if ((day >= 22 && day <=30 && month == "November") || (day >= 1 && day <= 21 && month == "December"))
    {
        final = "Sagittarius";
    }if ((day >= 23 && day <= 31 && month == "October") || (day >= 1 && day <= 21 && month == "November"))
    {
        final = "Scorpio";
    }
    if ((day >= 23 && day <=30 && month == "September") || (day >= 1 && day <= 22 && month == "October"))
    {
        final = "Libra";
    }
    if ((day >= 23 && day <= 31 && month == "August") || (day >= 1 && day <= 22 && month == "September"))
    {
        final = "Virgo";
    }
    if ((day >= 23 && day <=31 && month == "July") || (day >= 1 && day <= 22 && month == "August"))
    {
        final = "Leo";
    }
    if ((day >= 21 && day <= 30 && month == "June") || (day >= 1 && day <= 22 && month == "July"))
    {
        final = "Cancer";
    }
    if ((day >= 21 && day <=31 && month == "May") || (day >= 1 && day <= 20 && month == "June"))
    {
        final = "Gemini";
    }
    if ((day >= 20 && day <= 30 && month == "April") || (day >= 1 && day <= 20 && month == "May"))
    {
        final = "Taurus";
    }
    if ((day >= 21 && day <=31 && month == "March") || (day >= 1 && day <= 19 && month == "April"))
    {
        final = "Aries";
    }
    return final;
}