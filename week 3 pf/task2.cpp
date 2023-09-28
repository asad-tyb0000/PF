#include <iostream>
using namespace std;
main()
{
           float weight_in_pounds; 
           float weight_in_kilograms;
           float converting_value = 0.45;
           cout << "Enter weight in pounds: " ;
           cin >> weight_in_pounds ;
           weight_in_kilograms = weight_in_pounds * converting_value  ;
           cout << weight_in_pounds << " pounds is equal to " << weight_in_kilograms << " kilograms.";
}