#include <iostream>
using namespace std;
void finalprice(string c, float price,float discount);

main()
{	string c;
	float price;
	float discount;
	cout << "Enter the country's name: ";
	cin >> c;
	cout << "Enter the ticket price in dollars: $";
	cin >> price;
	finalprice(c,price,discount);
	
	
}

void finalprice(string c, float price,float discount)
{
	if (c == "Pakistan")
	{	 discount = price-(price*5/100);	}
	if (c == "Ireland")
	{	 discount = price-(price*10/100);	}
	if (c == "India")
	{	 discount = price-(price*20/100);	}
	if (c == "England")
	{	 discount = price-(price*30/100);	}
	if (c == "Canada")
	{	 discount = price-(price*45/100);	}
	cout << "Final ticket price after discount: $" << discount;
}