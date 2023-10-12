#include <iostream>
using namespace std;
float price(int rows,int columns,string type);

main ()
{
    int rows,columns;
    string type;
    float answer;
    cout << "Enter the screening type (Premiere/Normal/Discount): ";
    cin >> type;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;
    answer = price(rows,columns,type);
    cout << answer;

}

float price(int rows,int columns,string type)
{
    float final,tp;
    if (type == "Premiere")
    {
        tp = 12;
    }
    if (type == "Normal")
    {
        tp = 7.5;
    }
    if (type == "Discount")
    {
        tp = 5;
    }
    final = rows * columns * tp;
    return final;
}