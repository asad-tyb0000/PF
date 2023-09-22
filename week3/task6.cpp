#include <iostream> 
using namespace std;
main()
{
		float size;
		float cost_1bag;
		float area_covered;
		float costPerpound;
		float costPersq;
		cout << "Enter the size of the fertilizer bag in pounds: ";
		cin >> size;
		cout << "Enter the cost of the bag: $";
		cin >> cost_1bag;
		cout << "Enter the area in square feet that can be covered by the bag: ";
		cin >> area_covered;
		costPerpound = cost_1bag / size ;
		costPersq = cost_1bag / area_covered ;
		cout << "Cost of fertilizer per pound: $" << costPerpound << endl;
		cout << "Cost of fertilizing per square foot: $" << costPersq ; 
}