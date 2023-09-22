#include <iostream>
using namespace std;
main()
{
		float initial;
		float final;
		float acceleration;
		int time;
		cout << "Enter Initial Velocity (m/s): ";
		cin >> initial;
		cout << "Enter Acceleration (m/s^2): ";
		cin >> acceleration ;
		cout << "Enter Time (s): ";
		cin >> time;
		final = initial + ( acceleration * time);
		cout << "Final Velocity (m/s): " << final;
}