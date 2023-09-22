#include <iostream> 
using namespace std;
main()
{
		string name;
		float weight;
		float days;
		cout << "Enter the Name of the Person: ";
		cin >> name;
		cout << "Enter the target weight loss in kilograms: ";
		cin >> weight;
		days = 15*weight;
		cout << name << " will need " << days << " days to lose " << weight << " kg of weight by following the doctor's suggestions";
}