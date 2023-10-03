#include <iostream>
using namespace std;
void flowerShop(int redRose,int whiteRose,int tulip);

main()
{	int redRose;
	int whiteRose;
	int tulip;
	cout << "Red Rose: ";
	cin >> redRose;
	cout << "White Rose: ";
	cin >> whiteRose ;
	cout << "Tulips: ";
	cin >> tulip;
	flowerShop(redRose,whiteRose,tulip);
}

void flowerShop(int redRose,int whiteRose,int tulip)
{
	float total;
	float discounted;
	total = (2*redRose)+(4.10*whiteRose)+(2.50*tulip);
	if (total > 200)
	{	discounted = total - (total*20/100);	
	cout << "Original Price: $" << total << endl;
	cout << "Price after Discount: $" << discounted << endl;}
	if (total <= 200)
	{
	cout << "Original Price: $" << total << endl;
	cout << "No discount applied.";}
}