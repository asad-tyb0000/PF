#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);

main()
{
	system("cls");
	gotoxy(75,22);
	cout << "MUHAMMAD ASAD";
	gotoxy(0,40);
}


void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

