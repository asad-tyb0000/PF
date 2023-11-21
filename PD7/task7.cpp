#include <iostream>
using namespace std;
int patientCount(int days);
main()
{

}

void patientCount(int days)
{
    for(int x=1;x<=days;x++)
    {
        int days;
        cout << "Number of patient who visited hospital on Day " << x << ": ";
        cin << days;
    }
}