#include <iostream>
using namespace std;
void english(int number);

main()
{	int number;
	cout << "Enter a number (1-99): ";
	cin >> number;
	english(number);
}

void english(int number)
{	string number1,number2;
	int numbera,numberb;
	numbera = number / 10;
	numberb = number % 10;

	if (number == 11)
	{	cout << "Eleven";}
	if (number == 12)
	{	cout << "Twelve";}
	if (number == 10)
	{	cout << "Ten";}
	if (number == 13)
	{	cout << "Thirteen";}
	if (number == 14)
	{	cout << "Fourteen";}
	if (number == 15)
	{	cout << "Fifteen";}
	if (number == 16)
	{	cout << "Sixteen";}
	if (number == 17)
	{	cout << "Seventeen";}
	if (number == 18)
	{	cout << "Eighteen";}
	if (number == 19)
	{	cout << "Ninteen";}
	if (number == 20)
	{	cout << "twenty";}
	if (number == 1)
	{	cout << "One";}
	if (number == 2)
	{	cout << "Two";}
	if (number == 3)
	{	cout << "Three";}
	if (number == 4)
	{	cout << "Four";}
	if (number == 5)
	{	cout << "Five";}
	if (number == 6)
	{	cout << "Six";}
	if (number == 7)
	{	cout << "Seven";}
	if (number == 8)
	{	cout << "Eight";}
	if (number == 9)
	{	cout << "Nine";}		
		
	
	if (number >= 21)
	{	
	if (numbera == 2)
	{	number1 = "Twenty";}
	if (numbera == 3)
	{	number1 = "Thirty";}
	if (numbera == 4)
	{	number1 = "Fourty";}
	if (numbera == 5)
	{	number1 = "Fifty";}
	if (numbera == 6)
	{	number1 = "Sixty";}
	if (numbera == 7)
	{	number1 = "Seventy";}
	if (numbera == 8)
	{	number1 = "Eighty";}
	if (numbera == 9)
	{	number1 = "Ninety";}
	if (numberb == 1)
	{	number2 = "One";}
	if (numberb == 2)
	{	number2 = "Two";}
	if (numberb == 3)
	{	number2 = "Three";}
	if (numberb == 4)
	{	number2 = "Four";}
	if (numberb == 5)
	{	number2 = "Five";}
	if (numberb == 6)
	{	number2 = "Six";}
	if (numberb == 7)
	{	number2 = "Seven";}
	if (numberb == 8)
	{	number2 = "Eight";}
	if (numberb == 9)
	{	number2 = "Nine";}
								
	cout << number1 << number2;
						}
}











