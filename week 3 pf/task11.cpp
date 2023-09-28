#include <iostream>
using namespace std;
main()
{
		int now;
		int then;
		int rate;
		cout << "Enter the current world population: ";
		cin >> now;
		cout << "Enter the monthly birth rate (number of births per month): ";
		cin >> rate;
		then = now + (rate*12*30);
		cout << "The population in three decades will be: " << then; 

}