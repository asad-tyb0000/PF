#include <iostream>
#include <windows.h>
using namespace std;
void printplayer();
void moveright();
void printenemy();
void eraseenemy();
void enemypatrol();
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

main()
{   system("cls");
    printmaze();
    printenemy();

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
        enemypatrol();
        Sleep(200);
        
    
    }
    
 
    
}

void printplayer()
{
    gotoxy(onex,oney);
    cout << " ________       "<<endl;
    gotoxy(onex,oney+1);
    cout << "/  | _   /___   "<<endl;
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

void printenemy()
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

void eraseenemy()
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

void enemypatrol()
{   
    
        eraseenemy();
        x=x+1;
        if (x==100)
        {
            x = 56;
        }    
        printenemy();
        
    
}