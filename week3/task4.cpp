#include <iostream> 
using namespace std;
main()
{
		float imposter;
		int player;
		int chance;
		cout << "Enter Imposter Count: ";
		cin >> imposter;
		cout << "Enter Player Count: ";
		cin >> player;
		chance = 100 * (imposter / player );
		cout << "Chance of being an imposter: " << chance << "%";
}