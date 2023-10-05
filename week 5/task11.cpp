#include <iostream>
using namespace std;
int pool(int volume,int pipe1,int pipe2,float hours);

main()
{	int volume,pipe1,pipe2;
	float hours;
	cout << "Enter volume of the pool in liters: ";
	cin >> volume;
	cout << "Enter flow rate of the first pipe per hour: ";
	cin >> pipe1;
	cout << "Enter flow rate of the second pipe per hour: ";
	cin >> pipe2;
	cout << "Enter hours that the worker is absent: ";
	cin >> hours;
	pool(volume,pipe1,pipe2,hours);
}

int pool(int volume,int pipe1,int pipe2,float hours)
{	int water_by_pipe1,water_by_pipe2,difference,filledpool,totalwater;
	totalwater = (pipe1 * hours) + (pipe2 * hours);
	water_by_pipe1 = ((pipe1 * hours) / totalwater)*100;
	water_by_pipe2 = ((pipe2 * hours) / totalwater)*100;
	filledpool = (totalwater / volume ) *100;
	difference = totalwater - volume;
	if (totalwater <= volume)
	{	cout << "The pool is " << filledpool << "% full." << " Pipe 1: " << water_by_pipe1 << "%. Pipe 2: " << water_by_pipe2 << "%.";}
	if (totalwater > volume)
	{	cout << "For " << hours << " hours, the pool overflows with " << difference << " liters.";}
}