#include <iostream>
using namespace std;
void evenorodd(int a);

main()
{
	int a;
	cout << "Enter a five-digit number: ";
	cin >> a;
	evenorodd(a);
}

void evenorodd(int a)
{	int b,c,d,e,f,n,g,h,i,j;
	n = a % 10;
	g = n / 10;
	b = g % 10;
	h = g / 10;
	c = h % 10;
	i = h / 10;
	d = i % 10;
	j = i / 10;
	e = j % 10;
	
	f = a+b+c+d+e;
	if (f%2 == 1)
	{	cout << "Oddish";}
	if (f%2 == 0)
	{	cout << "Evenish";}
} 