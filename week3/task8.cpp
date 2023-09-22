#include <iostream> 
using namespace std;
main()
{
		float vpcoins;
		float fpcoins;
		float vkg;
		float fkg;
		float earningcoins;
		cout << "Enter vegetable price per kilogram (in coins): ";
		cin >> vpcoins;
		cout << "Enter fruit price per kilogram (in coins): ";
		cin >> fpcoins;
		cout << "Enter total kilograms of vegetables: ";
		cin >> vkg;
		cout << "Enter total kilograms of fruits: ";
		cin >> fkg;
		earningcoins = ((vpcoins/1.94)*vkg)+((fpcoins/1.94)*fkg);
		cout << "Total earnings in Rupees (Rps): " << earningcoins ; 
}