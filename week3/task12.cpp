#include <iostream>
using namespace std;
main()
{
		int n;
		int w,h;
		int result;
		cout << "Number of square meters you can paint: ";
		cin >> n;
		cout << "Width of the single wall (in meters): ";
		cin >> w;
		cout << "Height of the single wall (in meters): ";
		cin >> h;
		result=n/(w*h);
		cout << "Number of walls you can paint: " << result ;
}