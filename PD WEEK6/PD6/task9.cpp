#include <iostream>
using namespace std;
string checkPointPosition(int h, int x, int y);
main()
{
    int h;
    int x;
    int y;
    string answer;
    cout << "Enter height: ";
    cin >> h;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;
    answer = checkPointPosition(h,x,y);
    cout << answer;
}
string checkPointPosition(int h,int x,int y)
{
    bool onTheBorder; 
    onTheBorder = (x>= 0 &&x <= 3*h && (y == 0 || y== h))  || (y>= 0 && y <=  4*h && (x== 0 ||   x==2* h))|| (x==  h&& y>=h&& y <=3*h);
    if(onTheBorder)
    {
        return "Border";
    }
    if((x>0 && x < h*2) && (y >0 && y < h*4))
    {
        return "Inside";
    }
    else
    {
        return "Outside";
    }
}