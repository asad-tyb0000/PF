#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void printh();
void printa();
void prints();
void printn();

main()
{
	gotoxy(79,18);
	printh();
	gotoxy(79,19);
	printa();
	gotoxy(79,20);
	prints();
	gotoxy(79,21);
	prints();
	gotoxy(79,22);
	printa();
	gotoxy(79,23);
	printn();
}

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printh()
{	cout << "H";	}

void printa()
{	cout << "A";	}

void prints()
{	cout << "S";	}

void printn()
{	cout << "N";	}