#include <iostream>
float discreminant(int a,int b,int c);
int determinant(float a,float b,float c);
using namespace std;

main()
{
	cout << "Enter the value of a: ";
	cin >> a;
	cout << "Enter the value of b: ";
	cin >> b;
	cout << "Enter the value of c: ";
	cin >> c;
	discreminant(a,b,c);
	determinant(a,b,c);
	
	
	
}

int discreminant(int a,int b,int c)
{	float disc,a,b,c;
	disc = (b*b)-4(a*c);
	return disc;
}

int determinant(float a,float b,float c)
{		float disc,discreminant,a,b,c,roota,rootb,
		discreminant = disc(a,b,c);
	if (discreminant > 0)
	{	roota =(-b/2a) ;
		rootb =((sqrt(discreminant))/2a);	
		cout << "Complex Solutions: x = " << roota << " + " << rootb << " and x = " << roota << " - " << rootb ;}
	if (discreminant = 0)
	{	roota =(-b/2a) ;
		rootb =((sqrt(discreminant))/2a);
		cout << "Solutions: x = " << roota;	}
		if (discreminant < 0)
	{	roota =(-b/2a) ;
		rootb =((sqrt(discreminant))/2a);	
		cout << "Complex Solutions: x = " << roota << " + " << rootb << "i"<< " and x = " << roota << " - " << rootb << "i" ;}
}