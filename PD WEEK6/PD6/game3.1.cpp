#include <iostream>
#include <windows.h>
using namespace std;
void printplayer();
void moveright();
void printenemy1();
void eraseenemy1();
void printenemy2();
void eraseenemy2();
void printenemy3();
void eraseenemy3();
void enemypatrolhor();
void gotoxy(int x,int y);
void printmaze();
void eraseplayer();
void moveleft();
void moveup();
void movedown();
char getCharAtxy(short int x, short int y);
int onex = 16;
int oney = 4;
int x=5;
int y=20;

int x2=5;
int y2=5;

int x3=62;
int y3=6;
bool reverse1= false,reverse2=false,reverse3=false;
void enemypatrolver();
void enemypatroldiag();

main()
{   system("cls");
    printmaze();
    printenemy1();
    printenemy2();
    printenemy3();
    printplayer();
       while (true)
    {
        if (GetAsyncKeyState(VK_RIGHT))
        {
            moveright();
        }
        if (GetAsyncKeyState(VK_LEFT))
        {
            moveleft();
        }
        if (GetAsyncKeyState(VK_UP))
        {
            moveup();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            movedown();       
        }
        enemypatrolhor();
        enemypatrolver();
        enemypatroldiag();
        Sleep(200);
    }
}

void printplayer()
{
    gotoxy(onex,oney);
    cout << " ________       "<<endl;
    gotoxy(onex,oney+1);
    cout << "/  | _   /____  "<<endl;
    gotoxy(onex,oney+2);
    cout << "|_(o)____(o)__/ "<<endl;
    
}

void eraseplayer()
{
    gotoxy(onex,oney);
    cout << "                "<<endl;
    gotoxy(onex,oney+1);
    cout << "                "<<endl;
    gotoxy(onex,oney+2);
    cout << "                "<<endl;
}



void gotoxy(int x,int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void moveright()
{   
if (getCharAtxy(onex + 17, oney) == ' ')
{
eraseplayer();
onex = onex + 1;
printplayer();

}
}

void moveleft()
{   
if (getCharAtxy(onex - 1, oney) == ' ')
{
eraseplayer();
onex = onex - 1;
printplayer();

}
}


void moveup()
{   
if (getCharAtxy(onex , oney - 1) == ' ')
{
eraseplayer();
oney = oney - 1;
printplayer();

}
}

void movedown()
{   
if (getCharAtxy(onex , oney + 3) == ' ')
{
eraseplayer();
oney = oney + 1;
printplayer();

}
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
    : ' ';
}

void printmaze()
{
    
    cout << "########################################################################################################################################################################";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "#                                                                                                                                                                      #";
    cout << "########################################################################################################################################################################";

}

void printenemy1()
{
    gotoxy(x+20,y+1);
    cout << "   ------    ";
    gotoxy(x+20,y+2);
    cout << "  /(o)(o)\\  ";
    gotoxy(x+20,y+3);
    cout << "  |      |   ";
    gotoxy(x+20,y+4);
    cout << "  | '--' |   ";
    gotoxy(x+20,y+5);
    cout << "  (0)__(0)   ";
    gotoxy(x+20,y+6);
    cout << "    /  \\    ";
    gotoxy(x+20,y+7);
    cout << "     ||      ";

}

void eraseenemy1()
{
    gotoxy(x+20,y+1);
    cout << "             ";
    gotoxy(x+20,y+2);
    cout << "             ";
    gotoxy(x+20,y+3);
    cout << "             ";
    gotoxy(x+20,y+4);
    cout << "             ";
    gotoxy(x+20,y+5);
    cout << "             ";
    gotoxy(x+20,y+6);
    cout << "             ";
    gotoxy(x+20,y+7);
    cout << "             ";

}

void enemypatrolhor()
{   
    eraseenemy1();
    if (reverse1 == false)
    {
        x = x+1;
    }
    if (x==100)
    {
        reverse1=true;
    }
    if(reverse1==true)
    {
        x=x-1;
    }
    if (x == 56)
    {
        reverse1 = false;
    }
    printenemy1();       
    
}

void printenemy2()
{
    
    gotoxy(x2,y2+1);
    cout << "   ------    ";
    gotoxy(x2,y2+2);
    cout << "  /(o)(o)\\  ";
    gotoxy(x2,y2+3);
    cout << "  |      |   ";
    gotoxy(x2,y2+4);
    cout << "  | '--' |   ";
    gotoxy(x2,y2+5);
    cout << "  (0)__(0)   ";
    gotoxy(x2,y2+6);
    cout << "    /  \\    ";
    gotoxy(x2,y2+7);
    cout << "     ||      ";

}

void eraseenemy2()
{
    
    gotoxy(x2,y2+1);
    cout << "             ";
    gotoxy(x2,y2+2);
    cout << "             ";
    gotoxy(x2,y2+3);
    cout << "             ";
    gotoxy(x2,y2+4);
    cout << "             ";
    gotoxy(x2,y2+5);
    cout << "             ";
    gotoxy(x2,y2+6);
    cout << "             ";
    gotoxy(x2,y2+7);
    cout << "             ";

}

void enemypatrolver()
{
    
    eraseenemy2();
    if (reverse2 == false)
    {
        y2=y2+1;
    }
    if( y2 == 15)
    {
        reverse2 = true;
    }
    if (reverse2 == true)
    {
        y2=y2-1;
    }
    if(y2 == 5)
    {
        reverse2 = false;
    }
    printenemy2();
}

void printenemy3()
{
    
    gotoxy(x3,y3+1);
    cout << "   ------    ";
    gotoxy(x3,y3+2);
    cout << "  /(o)(o)\\  ";
    gotoxy(x3,y3+3);
    cout << "  |      |   ";
    gotoxy(x3,y3+4);
    cout << "  | '--' |   ";
    gotoxy(x3,y3+5);
    cout << "  (0)__(0)   ";
    gotoxy(x3,y3+6);
    cout << "    /  \\    ";
    gotoxy(x3,y3+7);
    cout << "     ||      ";

}

void eraseenemy3()
{
    
    gotoxy(x3,y3+1);
    cout << "             ";
    gotoxy(x3,y3+2);
    cout << "             ";
    gotoxy(x3,y3+3);
    cout << "             ";
    gotoxy(x3,y3+4);
    cout << "             ";
    gotoxy(x3,y3+5);
    cout << "             ";
    gotoxy(x3,y3+6);
    cout << "             ";
    gotoxy(x3,y3+7);
    cout << "             ";

}

void enemypatroldiag()
{
    
    eraseenemy3();
    if (reverse3 == false)
    {
        y3=y3+1;
        x3=x3+2;
    }
    if( y3 == 15 )
    {
        reverse3 = true;
    }
    if (reverse3 == true)
    {
        y3=y3-1;
        x3=x3-2;
    }
    if(y3 == 5)
    {
        reverse3 = false;
    }
    printenemy3();
}