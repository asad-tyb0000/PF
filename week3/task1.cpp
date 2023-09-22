#include <iostream>
using namespace std;
main()
{
		int sides;
		int angle;
		cout << "Enter the number of sides of the polygon: ";
		cin >> sides;
		angle = (sides - 2) * 180;
		cout << "The sum of internal angles of a " << sides << "-sided polygon is: " << angle << " degrees";
}