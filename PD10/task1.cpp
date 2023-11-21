#include <iostream>
using namespace std;
main()
{
    int total;
    cout << "Enter the number of Saturdays: ";
    cin >> total;
    int sat[total];
    int count = 0 ;
    for(int x = 0; x < total; x++)
    {
        cout << "Enter miles run for Saturday " << x+1 << ": ";
        cin >> sat[x];
        if(x > 0)
        {
            if(sat[x] > sat[x-1])
            count++;
        }
    }
    cout << "Total progress days: " << count ;
}
