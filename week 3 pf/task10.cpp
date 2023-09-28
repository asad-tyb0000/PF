#include <iostream>
using namespace std;
main()
{
		int win;
		int draw;
		int losses;
		string team;
		int points;
		cout << "Enter the name of the cricket team: ";
		cin >> team ;
		cout << "Enter the number of wins: ";
		cin >> win ;
		cout << "Enter the number of draws: ";
		cin >> draw ;
		cout << "Enter the number of losses: ";
		cin >> losses ;
		points=(3*win)+(1*draw)+(0*losses);
		cout << team << " has obtained " << points << " points in the Asia Cup tournament.";

}