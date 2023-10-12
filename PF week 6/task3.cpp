#include<iostream>
using namespace std;
float perimeter(char shape,float value);

main()
{
    char shape;
    float value,answer;
    cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin >> shape;
    cout << "Enter the value: ";
    cin >> value;
    answer = perimeter(shape,value);
    cout << "The perimeter is: " << answer;

}

float perimeter(char shape,float value)
{
    float final;
    if (shape == 'c')
    {
        final = 6.28 * value; 
    }
    else
    {
        if (shape == 't')
        {
            final = 3 * value;
        }
        else
        {
            if (shape == 's')
            {
                final = 4 * value;
            }
            else
            if (shape == 'h')
            {
                final = 6 * value;
            }
        } 
    }
    return final;
}