#include <iostream>
using namespace std;
main()
{
		int number;
		int sum = 0;
		cout << "enter the 5-digit integer: ";
		cin >> number;
		sum = sum + (number%10);
		number=number/10;
		sum = sum + (number%10);
		number=number/10;
		sum=sum+ (number%10);
		number = number/10;
		sum = sum + (number%10);
		number=number/10;
		sum=sum + (number%100);
		cout << "the result is: " << sum;

}