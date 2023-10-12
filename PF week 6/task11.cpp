#include <iostream>
using namespace std;
string speedcheck(float speed);

main()
{
    float speed;
    string answer;
    cout << "Enter the speed: ";
    cin >> speed;
    answer = speedcheck(speed);
    cout << answer;
}

string speedcheck(float speed)
{
    string final;
    if (speed <= 10)
    {
        final = "slow";
    }
    if (speed >10 && speed <= 50)
    {
        final = "average";
    }
    if (speed >50 && speed <= 150)
    {
        final = "fast";
    }
    if (speed >150 && speed <= 1000)
    {
        final = "ultra-fast";
    }
    if (speed > 1000)
    {
        final = "extremely fast";
    }
    return final;
}