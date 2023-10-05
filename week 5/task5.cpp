#include<iostream>
#include<cmath>
using namespace std;
main()
{
	float a;
	cout<<"Enter the value of a: ";
	cin>>a;
	float b;
	cout<<"Enter the value of b: ";
	cin>>b;
 	float c;
 	cout<<"Enter the value of c: ";
	cin>>c;
	float det=(b*b)-(4*a*c);
	if(det>0)
{
	float sq=(b*b)-(4*a*c);
	sqrt(sq);
	float root1=(-b+sqrt(sq))/(2*a);
	float root2=(-b-sqrt(sq))/(2*a);
	cout<<"Solutions: x = "<<root1 <<" and x = " <<root2;
}
	if (det==0)
{
	float result=(-b/(2*a));
	cout<<"Solution: x = "<<result;
}
	if(det<0)
{
	float sq1=((b*b)-(4*a*c));
	float result=(sqrt(-sq1)/(2*a));
	float real=-b/(2*a);
	cout<<"Complex Solutions: x = "<<real<<" + "<<result<<"i and x = "<<real<<" - "<<result<<"i"; 
}
}
  

