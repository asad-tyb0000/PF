#include <iostream>
using namespace std;
void possiblebonus(int yp,int fp,int difference);

main()
{
	int yp,fp;
	int difference;
	cout << "Enter your position: ";
	cin >> yp;
	cout << "Enter your friend's position: ";
	cin >> fp;
	possiblebonus(yp,fp,difference);
}

void possiblebonus(int yp,int fp,int difference)
{
	difference = fp - yp;
	if (difference <= 6)
	{	cout << "true";	}
	if (difference > 6)
	{	cout << "false";	}
}