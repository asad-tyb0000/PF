#include <iostream>
using namespace std;
string decideActivity(string temperature,string humidity);

main()
{
    string temperature,humidity,answer;
    cout << "Enter temperature (warm or cold): ";
    cin >> temperature;
    cout << "Enter humidity (dry or humid): ";
    cin >> humidity;
    answer = decideActivity(temperature,humidity);
    cout << "Recommended activity: " << answer;
}

string decideActivity(string temperature,string humidity)
{
    string final;
    if (temperature == "warm" && humidity == "dry")
    {
        final = "Play tennis";
    }
    if (temperature == "warm" && humidity == "humid")
    {
        final = "Swim";
    }
    if (temperature == "cold" && humidity == "dry")
    {
        final = "Play basketball";
    }
    if (temperature == "cold" && humidity == "humid")
    {
        final = "Watch TV";
    }
    return final;
}