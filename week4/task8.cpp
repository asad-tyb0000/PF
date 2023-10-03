#include <iostream>
using namespace std;
void pet(int holidays);

main ()
{
	int holidays;
	cout << "Holidays: ";
	cin >> holidays;
	pet(holidays); 
}

void pet(int holidays)
{
	int workingdays;
	int games;
	int difference;
	int hours,mints;
	workingdays = 365 - holidays;
	games = (workingdays*63)+(holidays*127);
	difference = 30000 - games;
	if (difference >= 0)
	{	cout << "Tom sleeps well"<<endl;
		difference = 30000 - games;
		hours=difference/60;
		mints=difference-(hours*60);
		cout << hours << " hours and " << mints << " minutes less for play";	}
	if (difference < 0)
	{	cout << "Tom will run away"<<endl;
		difference = games-30000;
		hours=difference/60;
		mints=difference-(hours*60);
		cout << hours << " hours and " << mints << " minutes for play";		}


}