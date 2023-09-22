#include <iostream>
using namespace std;
main()
{
		int age;
		int moved;
		int totalhouses;
		int average;
		cout << "Enter the person's age: ";
		cin >> age ;
		cout << "Enter the number of times they've moved: ";
		cin >> moved;
		totalhouses=moved+1;
		average=age/totalhouses;
		cout << "Average number of years lived in the same house: " << average ;
}