#include <iostream>
using namespace std;
int symmetrical(int a);

main()
{	int a;
	cout << "Enter a three-digit number: " ;
	cin >> a;
	symmetrical(a);
}

int symmetrical(int a)
{	int b,c;
	b = a / 10;
	c = b / 10;
	if ((a % 10) == c )
	{	cout << "The number is symmetrical." ; }
	if ((a % 10) != c)
	{	cout << "The number is not symmetrical." ; }
}