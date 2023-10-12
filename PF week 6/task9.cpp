#include <iostream>
using namespace std;
string title(int age,char gender);

main()
{
    int age;
    char gender;
    string answer;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gender (m/f): ";
    cin >> gender;
    answer = title(age,gender);
    cout << "Your personal title is: " << answer;
}

string title(int age,char gender)
{
    string final;
    if (gender == 'm' && age >= 16)
    {
        final = "Mr.";
    }
    if (gender == 'm' && age < 16)
    {
        final = "Master";
    }
    if (gender == 'f' && age >= 16)
    {
        final = "Ms.";
    }
    if (gender == 'f' && age < 16)
    {
        final = "Miss";
    }
    return final;
}