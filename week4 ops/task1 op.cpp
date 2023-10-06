#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void printm();
void printa();
void prints();
void printd();
void printa2();
main()
{
	system("cls");
	gotoxy(30,22);
	printm();
	gotoxy(40,22);
	printa();
	gotoxy(50,22);
	prints();
	gotoxy(60,22);
	printa2();
	gotoxy(70,22);
	printd();
	gotoxy(0,40);
}


void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printm()
{
	cout << "**   **"<<endl;
	gotoxy(30,23);
	cout << "*** ***"<<endl;
	gotoxy(30,24);
	cout << "** * ** **"<<endl;
	gotoxy(30,25);
	cout << "**   **"<<endl;
	gotoxy(30,26);
	cout << "**   **"<<endl;
}

void printa()
{
	cout << "   **   "<<endl;
	gotoxy(40,23);
	cout << " **  ** "<<endl;
	gotoxy(40,24);
	cout << " ****** "<<endl;
	gotoxy(40,25);
	cout << " **  ** "<<endl;
	gotoxy(40,26);
	cout << " **  ** "<<endl;
}

void prints()
{
	cout << "   **	"<<endl;
	gotoxy(50,23);
	cout << " **  **"<<endl;
	gotoxy(50,24);
	cout << "    ** "<<endl;
	gotoxy(50,25);
	cout << " **  **"<<endl;
	gotoxy(50,26);
	cout << "   **  "<<endl;
}

void printd()
{
	cout << " **** " <<endl;
	gotoxy(70,23);
	cout << " **  *" <<endl;
	gotoxy(70,24);
	cout << " **  *" <<endl;
	gotoxy(70,25);
	cout << " **  *" <<endl;
	gotoxy(70,26);
	cout << " **** " <<endl;
}

void printa2()
{
	cout << "   **   "<<endl;
	gotoxy(60,23);
	cout << " **  ** "<<endl;
	gotoxy(60,24);
	cout << " ****** "<<endl;
	gotoxy(60,25);
	cout << " **  ** "<<endl;
	gotoxy(60,26);
	cout << " **  ** "<<endl;
}