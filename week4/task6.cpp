#include <iostream>
using namespace std;
void longesttime(int min,int hour,int minhrs);

main()
{
	int min,hour,minhrs;
	cout << "Enter the number of hours: ";
	cin >> hour;
	cout << "Enter the number of minutes: ";
	cin >> min;
	longesttime(min,hour,minhrs);
}

void longesttime(int min,int hour,int minhrs)
{
	minhrs = hour * 60;
	if (minhrs < min)
	{	cout << min;	}
	if (minhrs > min)
	{	cout << hour;	} 
}