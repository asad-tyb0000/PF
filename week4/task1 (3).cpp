#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void printmaze();
void move(int x,int y);

main()
{
	system("cls");
	int x = 36;
	int y = 3;
	printmaze();
	while (true)
	{	 
		move(x,y);
		y = y + 1;
		if (y == 10)
		{	y = 3;	}
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
	cout << "o";
	Sleep(250);
	gotoxy(x,y);
	cout << " ";
}