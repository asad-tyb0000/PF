#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x,int y);
void printmaze();
void move(int x,int y);

main()
{	int x = 8;
	int y = 5;
	printmaze();
	while (true)
	{	move(x,y);
		x = x+1;
		if (x == 40)
		{	x = 4;
				}
					}
	
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printmaze()
{
	cout << "   ######################################     " << endl;
	cout << "   #                                    #     " << endl;
	cout << "   #                                    #     " << endl;
	cout << "   #                                    #     " << endl;
	cout << "   #                                    #     " << endl;
	cout << "   #                                    #     " << endl;
	cout << "   #                                    #     " << endl;
	cout << "   #                                    #     " << endl;
	cout << "   #                                    #     " << endl;
	cout << "   #                                    #     " << endl;
	cout << "   #                                    #     " << endl;
	cout << "   ######################################     " << endl;
}

void move(int x,int y)
{
	gotoxy(x,y);
	cout << "P";
	Sleep(300);
	gotoxy(x,y);
	cout << " ";
	
} 