#include <iostream>
using namespace std;
main()
{
    int boxes;
    cout << "Enter the number of boxes: ";
    cin >> boxes;
    cout << "Enter the dimensions of the boxes (length, width, height):" << endl ;
    int dim[3*boxes];
    for(int x=0; x<3*boxes ; x++)
    {
        cin >> dim[x];
    }
    int count_addition = 0;
    for(int y=0 ; y<3*boxes ; y=y+3)
    {
        int count_product = 1;
        for(int z=y ; z<y+3 ; z++)
        {
            dim[z];
            count_product = count_product * dim[z];
        }
        count_addition = count_addition + count_product;
    }
    cout << "Total volume of all boxes: " << count_addition ;
}