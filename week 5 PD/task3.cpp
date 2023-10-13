#include <iostream>
using namespace std;
float tax(float price,char vtype);

main()
{
    float price,final;
    char vtype;
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin >> vtype;
    cout << "Enter the price of the vehicle: $";
    cin >> price;
    final = tax(price,vtype);
    cout << "The final price of a vehicle of type " << vtype << " after adding the tax is $" << final;
}

float tax(float price,char vtype)
{   
    float taxrate,taxamount,fprice;
    if (vtype == 'M')
    {
        taxrate = 6;
    }
    if (vtype == 'E')
    {
        taxrate = 8;
    }
    if (vtype == 'S')
    {
        taxrate = 10;
    }
    if (vtype == 'V')
    {
        taxrate = 12;
    }
    if (vtype == 'T')
    {
        taxrate = 15;
    }
    taxamount = price * (taxrate/100);
    fprice = price + taxamount;
    return fprice;
}