#include <iostream>
#include <windows.h>
using namespace std;
void aggregate();
void maxmarks();
void header();
void logo();
void gotoxy(int x,int y);
void options();


main()
{   int opt;
    system("cls");
    system("color 01");
    header();
    logo();
    options();
    gotoxy(21,19);
    cout << "Go to (1,2): ";
    cin >> opt;
    if (opt == 1)
    {
        aggregate();
    }
    if (opt == 2)
    {
        maxmarks();
    }
}


void header()
{
    cout << "*************************************************************************"<<endl;
    cout << "*************************************************************************"<<endl;
    cout << "**                                                                     **"<<endl;
    cout << "**                                                                     **"<<endl;
    cout << "**                                                                     **"<<endl;
    cout << "**                                                                     **"<<endl;
    cout << "**                                                                     **"<<endl;
    cout << "**                                                                     **"<<endl;
    cout << "**                                                                     **"<<endl;
    cout << "**                                                                     **"<<endl;
    cout << "**                                                                     **"<<endl;
    cout << "**                                                                     **"<<endl;
    cout << "**                                                                     **"<<endl;
    cout << "**                                                                     **"<<endl;
    cout << "*************************************************************************"<<endl;
    cout << "*************************************************************************"<<endl;
    cout << "**                                                                     **"<<endl;
    cout << "**                                                                     **"<<endl;
    cout << "**                                                                     **"<<endl;
    cout << "**                                                                     **"<<endl;
    cout << "**                                                                     **"<<endl;
    cout << "*************************************************************************"<<endl;
    cout << "*************************************************************************"<<endl;

}


void logo()
{
    gotoxy(20,5);
    cout << "   **  **   *****  ********"<<endl;
    gotoxy(20,6);
    cout << "   **  **   **        **   "<<endl;
    gotoxy(20,7);
    cout << "   **  **   ****      **   "<<endl;
    gotoxy(20,8);
    cout << "   **  **   **        **   "<<endl;
    gotoxy(20,9);
    cout << "   ******   *****     **   "<<endl;
    gotoxy(18,12);
    cout << "( M A N A G E M E N T   S Y S T E M )";
}

void gotoxy(int x,int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void options()
{
    gotoxy(18,16);
    cout << "Enter 1 ====> Calculate Aggregate"<<endl;
    gotoxy(18,17);
    cout << "Enter 2 ====> Compare Marks"<<endl;
}

void maxmarks()
{
    system("cls");
    int ecatmarks1,ecatmarks2;
    string name1,name2;
    cout << "Enter your name of first person: ";
    cin >> name1;
    cout << "Enter ecat marks of first person: ";
    cin >> ecatmarks1;
    cout << "Enter your name of second person: ";
    cin >> name2;
    cout << "Enter ecat marks of second person: ";
    cin >> ecatmarks2;
    if (ecatmarks1 > ecatmarks2)
    {
        cout << name1 << " have roll no = 1";
    }
    if (ecatmarks1 < ecatmarks2)
    {
        cout << name2 << " have roll no = 1";
    }   
}

void aggregate()
{
    system("cls");
    string name;
    float metric,ecat,inter,aggr;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter metric marks(out of 1100): ";
    cin >> metric;
    cout << "Enter inter marks(out of 520): ";
    cin >> inter;
    cout << "Enter ecat marks(out of 400): ";
    cin >> ecat;
    aggr = (metric / 1100 * 30) + (inter / 520 * 30) + (ecat / 400 * 40);
    cout << "Your aggregate is = " << aggr ;

}