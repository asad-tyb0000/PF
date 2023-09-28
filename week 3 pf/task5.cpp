#include <iostream>
using namespace std;
main()
{
		string name ;
		float metric ;
		float inter  ;
		float ecat   ;
		float aggregate;
		float final_aggregate;
		cout << "Enter the student's name: " ;
		cin >> name ;
		cout << "Enter matriculation marks (out of 1100): ";
		cin >> metric ;
		cout << "Enter intermediate marks (out of 550): " ;
		cin >> inter ;
		cout << "Enter Ecat marks (out of 400): " ;
		cin >> ecat ;
		aggregate = (ecat/400 * 0.5)+(metric/1100 *0.1)+(inter/550 * 0.4) ;
		final_aggregate = aggregate * 100 ;
		cout << "Aggregate score for " << name << " in UET is: " << final_aggregate << "%" ;

}