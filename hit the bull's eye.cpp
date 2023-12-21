#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;



// levels
void print_level1();
void print_level2();


// basic decor functions
string setcolor(unsigned short color);
void youwon(int x, int y);
void tryagain(int x, int y);


// firing
void bullete(int bx,int by);
void eraseBullete(int bx,int by);
bool active = false;


// validations
bool containsAlp(string num);

// score and health
void score(int sc);
void health(int he);


// area & players
void printmaze();
void printMissing(int fireCount, int fireCounty[],int fireCountx[]);
void printPlayer1(int x1,int y1);
void erasePlayer1(int x1,int y1);
void name();
void ballon(int x,int y);
void eraseballon(int x ,int y);



// array fire and values
int Firex[100000];
int Firey[100000];


// movement
void gotoxy(int x1,int y1);
char getCharAtxy(short int x, short int y);
void moveup1(int x1,int &y1);
void movedown1(int x1,int &y1);
void fire1( bool &f, int &sc , int &he , int &fireCount , int fireCountx[] , int fireCounty[]);

// main
int main()
{

    string option;
    system("cls");
    name();
    int b1x = 0;
    int b1y = 0;
    int he=30;
    int sc=0;
    int fireCount = 0;
    int fireCountx[100000] ;
    int fireCounty[100000] ;
    bool f = false;
    int x1,y1,x2,y2;
    x1=2;
    y1=18;
    x2=110;
    y2=18;
    setcolor(4);
    gotoxy(17,14);
    cout << "Enter level(1 or 2) to play and 3 to exit: ";
    cin >> option;
    if(containsAlp(option))
    {
        system("cls");
        gotoxy(15,7);
        cout << "Invalid option";
        getch();
    }
    else
    {
        if(option == "3")
        {
            return 0;
        }
        if(option == "1")
        {
            setcolor(6);
            system("cls");
            print_level1();
            getch();
            system("cls");
            cout << "RULES:\nHit the targets!\n you have 30 hearts! one wrong hit lose u 10 hearts!\nHit the bulls eye and win the game"<<endl;
            cout << endl;
            printmaze();
            ballon(164,12);
            ballon(155,17);
            ballon(160,22);
            ballon(144,29);
            ballon(149,34);
            ballon(135,24);
        }
        if(option == "2")
        {
            setcolor(6);
            system("cls");
            print_level2();
            getch();
            system("cls");
            cout << "RULES:\nHit the targets!\n you have 30 hearts! one wrong hit on a \"#\" lose u 10 hearts!\nHit the bulls eye and win the game"<<endl;
            cout << endl;
            printmaze();
            gotoxy(144,15);
            cout << "#";
            gotoxy(153,19);
            cout << "#";
            gotoxy(121,26);
            cout << "#";
            gotoxy(111,39);
            cout << "#";
            ballon(164,13);
            ballon(155,28);
            ballon(160,22);
            ballon(144,33);
            ballon(149,34);
            ballon(135,24);
            ballon(120,47);
        }
        while(true)
        {
            if(he <=0)
            {
                system("cls");
                setcolor(4);
                tryagain(35, 9);
                getch();
                setcolor(6);
                main();
            }
            if(sc >= 600)
            {
                system("cls");
                setcolor(4);
                youwon( 35, 9);
                getch();
                setcolor(6);
                main();
            }
            if (GetAsyncKeyState(VK_UP))
            {
                moveup1(x1,y1);
                printPlayer1(x1,y1);
                Sleep(20);
                score(sc);
                health(he);
            }
            if (GetAsyncKeyState(VK_DOWN))
            {
                movedown1(x1,y1);
                printPlayer1(x1,y1);   
                Sleep(20);
                score(sc);
                health(he);    
            }
            if (GetAsyncKeyState(VK_SPACE))
            {
                    f = true;
                    fireCount++;
                    fireCountx[fireCount] = x1+18;
                    fireCounty[fireCount] = y1+2;
                    score(sc);
                    health(he);
            }
            if(f == true)
            {
                fire1(f,sc,he,fireCount,fireCountx,fireCounty);
            }
        }
    }
}

// movement
void gotoxy(int x,int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
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
void moveup1(int x1,int &y1)
{   
    if (getCharAtxy(x1 , y1 - 1) == ' ')
    {
        erasePlayer1(x1,y1);
        y1 --;
    }
}

void movedown1(int x1,int &y1)
{   
    if (getCharAtxy(x1 , y1 + 4) == ' ')
    {
        erasePlayer1(x1,y1);
        y1 ++;
    }
}



void fire1( bool &f , int &sc , int &he , int &fireCount , int fireCountx[] , int fireCounty[])
{
            if(getCharAtxy(fireCountx[fireCount]+4 , fireCounty[fireCount]) != '#'&&getCharAtxy(fireCountx[fireCount]+4 , fireCounty[fireCount]) != '(')
            {
                bullete(fireCountx[fireCount],fireCounty[fireCount]);
                Sleep(20);
                eraseBullete(fireCountx[fireCount],fireCounty[fireCount]);
                fireCountx[fireCount]++;
            }
            else
            {
                if(getCharAtxy(fireCountx[fireCount]+4 , fireCounty[fireCount]) == '#')
                {
                    f = false;
                    active = true;
                    he=he-10;
                    eraseBullete(fireCountx[fireCount],fireCounty[fireCount]);
                }
                if(getCharAtxy(fireCountx[fireCount]+4 , fireCounty[fireCount]) == '(')
                {
                    f = false;
                    active = true;
                    sc=sc+100;
                    eraseBullete(fireCountx[fireCount],fireCounty[fireCount]);
                    eraseballon(fireCountx[fireCount]+4 , fireCounty[fireCount]);
                }       
            }
}



// validation

bool containsAlp(string num)
{
    bool final = false;
    for(int x=0 ; num[x]!='\0' ; x++)
    {
        if(num[x] != '2'&&num[x] != '3'&&num[x] != '4'&&num[x] != '5'&&num[x] != '1'&&num[x] != '6'&&num[x] != '7'&&num[x] != '8'&&num[x] != '9'&&num[x] != '0')
        {
            final = true;
            break;
        }
    }
    return final;
}


// firing
void bullete(int bx,int by)
{
    gotoxy(bx,by);
    setcolor(9);
    cout << "===>";
}
void eraseBullete(int bx,int by)
{
    gotoxy(bx,by);
    cout << "    ";
}


// score and health
void score(int sc)
{
    gotoxy(120,2);
    setcolor(5);
    cout << "Score: " << sc ;
    setcolor(6);
}
void health(int he)
{
    gotoxy(120,3);
    setcolor(4);
    cout << "Health: " << he ; 
    setcolor(6);
}




// levels
void print_level1()
{
    setcolor(2);
    gotoxy(25,12);
    cout << " _                         _   __  "<<endl;                        
    gotoxy(25,13);
    cout << "| |                       | | /  | "<<endl;                        
    gotoxy(25,14);
    cout << "| |      ___ __   __  ___ | | `| | "<<endl;        
    gotoxy(25,15);
    cout << "| |     / _ \\\\ \\ / / / _ \\| |  | | "<<endl;                    
    gotoxy(25,16);
    cout << "| |____|  __/ \\ V / |  __/| | _| |_"<<endl;                            
    gotoxy(25,17);
    cout << "\\_____/ \\___|  \\_/   \\___||_| \\___/"<<endl;                                
    setcolor(6);                       
                                   
}
void print_level2()
{
    setcolor(2);
    gotoxy(25,12);
    cout << " _                         _      _____ "<<endl;                   
    gotoxy(25,13);
    cout << "| |                       | |    / __  \\"<<endl;                               
    gotoxy(25,14);
    cout << "| |      ___ __   __  ___ | |    `' / /'"<<endl;                           
    gotoxy(25,15);
    cout << "| |     / _ \\\\ \\ / / / _ \\| |      / /  "<<endl;                       
    gotoxy(25,16);
    cout << "| |____|  __/ \\ V / |  __/| |    ./ /___"<<endl;                           
    gotoxy(25,17);
    cout << "\\_____/ \\___|  \\_/   \\___||_|    \\_____/"<<endl;                                   
    setcolor(6);                                    
                                        
}




// area & players
void printPlayer1(int x1,int y1)
{
    setcolor(6);
    gotoxy(x1,y1);
    cout << " |\\              "<<endl;               
    gotoxy(x1,y1+1);
    cout << " | \\________ --. "<<endl;  
    gotoxy(x1,y1+2);
    cout << "--===--\\==\\=----*"<<endl;  
    gotoxy(x1,y1+3);
    cout << "        \\_/      "<<endl;  
    setcolor(7);          
}

void ballon(int x , int y)
{
    gotoxy(x,y);
    setcolor(4);
    cout << "(-)";
}
void eraseballon(int x,int y)
{
    gotoxy(x,y);
    setcolor(4);
    cout << "   ";
}



void erasePlayer1(int x1,int y1)
{
    gotoxy(x1,y1);
    cout << "                  "<<endl;               
    gotoxy(x1,y1+1);
    cout << "                  "<<endl;  
    gotoxy(x1,y1+2);
    cout << "                  "<<endl;  
    gotoxy(x1,y1+3);
    cout << "                  "<<endl;            
}


void name()
{
    setcolor(1);
    cout << " _         _       _    _                _             _    _    _                               "<<endl;    
    cout << "( )     _ ( )_    ( )_ ( )              ( )           (_ ) (_ ) ( )                              "<<endl;      
    cout << "| |__  (_)| ,_)   | ,_)| |__     __     | |_    _   _  | |  | | |/   ___       __   _   _    __  "<<endl;      
    cout << "|  _  || || |     | |  |  _  | / __ \\   |  _ \\ ( ) ( ) | |  | |    / ,__)    / __ \\( ) ( ) / __ \\"<<endl;      
    cout << "| | | || || |_    | |_ | | | |(  ___/   | |_) )| (_) | | |  | |    \\__, \\   (  ___/| (_) |(  ___/"<<endl;      
    cout << "(_) (_)(_) \\__)    \\__)(_) (_) \\____)   (_,__/  \\___/ (___)(___)   (____/    \\____) \\__, | \\____)"<<endl;      
    cout << "                                                                                   ( )_| |       "<<endl;      
    cout << "                                                                                   `\\___/'       "<<endl;      
    setcolor(6);
}       

void printmaze()
{
    setcolor(3);
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
    setcolor(7);
}

void printMissing( int fireCount,int fireCounty[] , int fireCountx[])
{
    setcolor(3);
    gotoxy(172,fireCounty[fireCount]);
    cout << "#";
    gotoxy(fireCountx[fireCount],fireCounty[fireCount]);
    cout << " ";
    gotoxy(0,fireCounty[fireCount]+1);
    cout << "#";
}


// decors
string setcolor(unsigned short color)
{
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon, color);
    return "";
}

void youwon(int x, int y)
{
    gotoxy(x,y);
    cout << "__   __                  "<<endl;                                   
    gotoxy(x,y+1);
    cout << "\\ \\ / /                  "<<endl;                                      
    gotoxy(x,y+2);
    cout << " \\ V /   ___   _   _     "<<endl;                                      
    gotoxy(x,y+3);
    cout << "  \\ /   / _ \\ | | | |    "<<endl;                                              
    gotoxy(x,y+4);
    cout << "  | |  | (_) || |_| |    "<<endl;                                                  
    gotoxy(x,y+5);
    cout << "  \\_/   \\___/  \\__,_|    "<<endl;                                              
    gotoxy(x,y+6);
    cout << "                         "<<endl;                                      
    gotoxy(x,y+7);
    cout << "                         "<<endl;                                              
    gotoxy(x,y+8);
    cout << " _    _                _ "<<endl;                                                  
    gotoxy(x,y+9);
    cout << "| |  | |              | |"<<endl;                                                  
    gotoxy(x,y+10);
    cout << "| |  | |  ___   _ __  | |"<<endl;                                                  
    gotoxy(x,y+11);
    cout << "| |/\\| | / _ \\ | '_ \\ | |"<<endl;                                                              
    gotoxy(x,y+12);
    cout << "\\  /\\  /| (_) || | | ||_|"<<endl;                                                  
    gotoxy(x,y+13);
    cout << " \\/  \\/  \\___/ |_| |_|(_)"<<endl;                                                      
    gotoxy(x,y+14);
    cout << "                         "<<endl;                                                      
}

void tryagain(int x, int y)
{
    gotoxy(x,y);
    cout << "_____                          "<<endl;    
    gotoxy(x,y+1);
    cout << "|_   _|                        "<<endl;    
    gotoxy(x,y+2);
    cout << "  | |   _ __  _   _            "<<endl;    
    gotoxy(x,y+3);
    cout << "  | |  | '__|| | | |           "<<endl;        
    gotoxy(x,y+4);
    cout << "  | |  | |   | |_| |           "<<endl;        
    gotoxy(x,y+5);
    cout << "  \\_/  |_|    \\__, |           "<<endl;        
    gotoxy(x,y+6);
    cout << "               __/ |           "<<endl;    
    gotoxy(x,y+7);
    cout << "              |___/            "<<endl;    
    gotoxy(x,y+8);
    cout << "  ___                 _        "<<endl;        
    gotoxy(x,y+9);
    cout << " / _ \\               (_)       "<<endl;            
    gotoxy(x,y+10);
    cout << "/ /_\\ \\  __ _   __ _  _  _ __  "<<endl;        
    gotoxy(x,y+11);
    cout << "|  _  | / _` | / _` || || '_ \\ "<<endl;        
    gotoxy(x,y+12);
    cout << "| | | || (_| || (_| || || | | |"<<endl;            
    gotoxy(x,y+13);
    cout << "\\_| |_/ \\__, | \\__,_||_||_| |_|"<<endl;            
    gotoxy(x,y+14);
    cout << "         __/ |                 "<<endl;            
    gotoxy(x,y+15);
    cout << "        |___/                  "<<endl;            
}