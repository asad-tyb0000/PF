#include <iostream> 
using namespace std;
main()
{
		string movie;
		float adult;
		float child;
		float adults;
		float childs;
		float charity;
		float amount;
		float donating;
		float remaining;
		cout << "Enter the movie name: ";
		cin >> movie;
		cout << "Enter the adult ticket price: $";
		cin >> adult;
		cout << "Enter the child ticket price: $";
		cin >> child;
		cout << "Enter the number of adult tickets sold: ";
		cin >> adults;
		cout << "Enter the number of child tickets sold: ";
		cin >> childs;
		cout << "Enter the percentage of the amount to be donated to charity: ";
		cin >> charity;
		cout << endl;
		cout << "Movie: " << movie << endl;
		amount = (adults*adult) + (childs*child);
		cout << "Total amount generated from ticket sales: $" << amount << endl;
		donating = (amount * 10)/100;
		cout << "Donation to charity (" << charity << "%): $" << donating << endl;
		remaining = amount - donating;
		cout << "Remaining amount after donation: $" << remaining << endl; 
		
		 
}