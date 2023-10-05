#include <iostream>
#include <string.h>
using namespace std;
int future(int hours,int mints);

main()
{
	int hours,mints;
	cout << "Enter Hours: ";
	cin >> hours;
	cout << "Enter Minutes: ";
	cin >> mints;
	future(hours,mints);
}

int future(int hours,int mints)
{	int ftime_hours , ftime_mints , future_time_in_mints , ptime_in_mints;
	ptime_in_mints = (hours * 60) + mints;
	future_time_in_mints = ptime_in_mints + 15;
	ftime_hours = future_time_in_mints/60;
	ftime_mints = future_time_in_mints - (ftime_hours * 60);
	cout << to_string(ftime_hours) << ":" << to_string(ftime_mints);
}