#include <iostream>
using namespace std;
float volume(float length,float width,float height,string unit);

main()
{
    float length,width,height,Vol;
    string unit;
    cout << "Enter the length of the pyramid (in meters): ";
    cin >> length;
    cout << "Enter the width of the pyramid (in meters): ";
    cin >> width;
    cout << "Enter the height of the pyramid (in meters): ";
    cin >> height;
    cout << "Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;
    Vol = volume(length,width,height,unit);
    cout << "The volume of the pyramid is: " << Vol << " cubic " << unit ;
}

float volume(float length,float width,float height,string unit)
{   float Volume;
    Volume = (length*width*height)/3;
    if (unit == "millimeters")
    {
        Volume = Volume * (1000000000);
    }
    if (unit == "centimeters")
    {
        Volume = Volume * (1000000);
    }
    if (unit == "kilometers")
    {
        Volume = Volume / 1000;
    }
    if (unit == "meters")
    {
        Volume = Volume;
    }
    return Volume;
}