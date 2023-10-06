#include <iostream>
#include <windows.h>
using namespace std;
void printh();
void printa();
void prints();
void printn();
void gotoxy(int x,int y);
void printa();
void printa1();
void prints();
void prints1();




main()
{
    printh();
    gotoxy(90,28);
    printa();
    gotoxy(90,33);
    prints();
    gotoxy(90,39);
    prints1();
    gotoxy(90,45);
    printa1();
    gotoxy(90,51);
    printn();
}

void printh()
{
    cout << "**  **" << endl;
    gotoxy(90,23);
    cout << "**  **" << endl;
    gotoxy(90,24);
    cout << "******" << endl;
    gotoxy(90,25);
    cout << "**  **" << endl;
    gotoxy(90,26);
    cout << "**  **" << endl;
}

void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printa()
{
	cout << "   **   "<<endl;
	gotoxy(90,29);
	cout << " **  ** "<<endl;
	gotoxy(90,30);
	cout << " ****** "<<endl;
	gotoxy(90,31);
	cout << " **  ** "<<endl;
	gotoxy(90,32);
	cout << " **  ** "<<endl;
}
void printa1()
{
	cout << "   **   "<<endl;
	gotoxy(90,46);
	cout << " **  ** "<<endl;
	gotoxy(90,47);
	cout << " ****** "<<endl;
	gotoxy(90,48);
	cout << " **  ** "<<endl;
	gotoxy(90,49);
	cout << " **  ** "<<endl;
}
void prints()
{
	cout << "   **	"<<endl;
	gotoxy(90,34);
	cout << " **  **"<<endl;
	gotoxy(90,35);
	cout << "    ** "<<endl;
	gotoxy(90,36);
	cout << " **  **"<<endl;
	gotoxy(90,37);
	cout << "   **  "<<endl;
}
void prints1()
{
	cout << "   **	"<<endl;
	gotoxy(90,40);
	cout << " **  **"<<endl;
	gotoxy(90,41);
	cout << "    ** "<<endl;
	gotoxy(90,42);
	cout << " **  **"<<endl;
	gotoxy(90,43);
	cout << "   **  "<<endl;
}
void printn()
{
    cout << "**  **" <<endl;
    gotoxy(90,52);
    cout << "*** **" <<endl;
    gotoxy(90,53);
    cout << "** * *" <<endl;
    gotoxy(90,54);
    cout << "** ***" <<endl;
    gotoxy(90,55);
    cout << "**  **" <<endl;
}