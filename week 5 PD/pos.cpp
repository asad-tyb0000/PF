#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void printheader();
void namepassword();
void gotoxy(int x,int y);
void checkok();
void availableproducts();
void addtokart();
int number;

main()
{
    system("cls");
    system("color 76");
    printheader();
    namepassword();
    addtokart();
    
}

void printheader()
{
    cout << "************************************************************************************************"<<endl;
    cout << "************************************************************************************************"<<endl;
    cout << "**                                                                                            **"<<endl;
    cout << "**                                                                                            **"<<endl;
    cout << "**                                                                                            **"<<endl;
    cout << "**                                                                                            **"<<endl;
    cout << "**                                                                                            **"<<endl;
    cout << "**                                                                                            **"<<endl;
    cout << "**                                                                                            **"<<endl;
    cout << "**                                                                                            **"<<endl;
    cout << "**                                                                                            **"<<endl;
    cout << "**                                                                                            **"<<endl;
    cout << "**                                                                                            **"<<endl;
    cout << "**                                                                                            **"<<endl;
    cout << "**                                                                                            **"<<endl;
    cout << "**                                                                                            **"<<endl;
    cout << "************************************************************************************************"<<endl;
    cout << "************************************************************************************************"<<endl;
    cout << "**                                                                                            **"<<endl;
    cout << "**                                                                                            **"<<endl;
    cout << "**                                                                                            **"<<endl;
    cout << "**                                                                                            **"<<endl;
    cout << "**                                                                                            **"<<endl;
    cout << "**                                                                                            **"<<endl;
    cout << "**                                                                                            **"<<endl;
    cout << "**                                                                                            **"<<endl;
    cout << "**                                                                                            **"<<endl;
    cout << "**                                                                                            **"<<endl;
    cout << "**                                                                                            **"<<endl;
    cout << "************************************************************************************************"<<endl;
    cout << "************************************************************************************************"<<endl;


    gotoxy(25,3);
    cout << "    **     **   **    **    *****   "<<endl;
    gotoxy(25,4);
    cout << "  **  **   **   **  **  **  **  **  "<<endl;
    gotoxy(25,5);
    cout << "  **       *******  **  **  *****   "<<endl;
    gotoxy(25,6);
    cout << "  **  **   **   **  **  **  ** *    "<<endl;
    gotoxy(25,7);
    cout << "    **     **   **    **    **  **  "<<endl;
    gotoxy(22,9);
    cout <<"    *****    **    *****    **    *****    "<<endl;
    gotoxy(22,10);
    cout <<"    **  ** **  **     *   **  **  **  **   "<<endl;
    gotoxy(22,11);
    cout <<"    *****  ******    *    ******  *****    "<<endl;
    gotoxy(22,12);
    cout <<"    **  ** **  **   *     **  **  ** *     "<<endl;
    gotoxy(22,13);
    cout <<"    *****  **  **  *****  **  **  **  **   "<<endl;
    gotoxy(1,18);
}

void gotoxy(int x,int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void namepassword()
{   
    string name,who;
    int password;
    gotoxy(26,21);
    cout << "|----------------------------------|"<<endl;
    gotoxy(26,22);
    cout << "|                                  |"<<endl;
    gotoxy(26,23);
    cout << "|----------------------------------|"<<endl;
    gotoxy(26,24);
    cout << "|                                  |"<<endl;
    gotoxy(26,25);
    cout << "|----------------------------------|"<<endl;
    gotoxy(29,22);
    cout << "Name: ";
    cin >> name ;
    gotoxy(29,24);
    cout << "Password: ";
    cin >> password ;
    if (name == "Asad" && password == 124578 )
    {
        checkok();
        availableproducts();
    }
    gotoxy(1,30);
}



void checkok()
{
    system("cls");
    gotoxy(30,15);
    cout << "#############################################################"<<endl;
    gotoxy(30,16);
    cout << "##                                                         ##"<<endl;
    gotoxy(30,17);
    cout << "##                                                         ##"<<endl;
    gotoxy(30,18);
    cout << "##                                                         ##"<<endl;
    gotoxy(30,19);
    cout << "##                                                         ##"<<endl;
    gotoxy(30,20);
    cout << "##                                                         ##"<<endl;
    gotoxy(30,21);
    cout << "#############################################################"<<endl;
    gotoxy(30,18);
    cout << "#############################################################"<<endl;
    gotoxy(52,18);
    cout << " C O R R E C T !";
    Sleep(550);
}



void availableproducts()
{
    
    system("cls");
    gotoxy(12,3);
    cout << "            ( A V A I L A B L E     P R O D U C T S ! )"<<endl;
    gotoxy(12,4); 
    cout << "Number \t Product_Name             \t Product_Price \t Copy_Product_Price"<<endl;
    gotoxy(12,5);
    cout << "1      \t T_Shirt                  \t 12000         \t 4000              "<<endl;
    gotoxy(12,6);
    cout << "2      \t jordan_sneakers          \t 20000         \t 6000              "<<endl;
    gotoxy(12,7);
    cout << "3      \t THE_NORTH_FACE_sneakers  \t 50000         \t 5000              "<<endl;
    gotoxy(12,8);
    cout << "4      \t Nike_pants               \t 13000         \t 4500              "<<endl;
    gotoxy(12,9);
    cout << "5      \t Diners_Suit              \t 20000         \t 9000              "<<endl;
    gotoxy(12,10);
    cout << "6      \t Diners_tie               \t 5000          \t 2000              "<<endl;
    gotoxy(12,11);
    cout << "7      \t calculate_total                                                "<<endl;
    gotoxy(12,12);
    cout << "8      \t show_products                                                  "<<endl;
    gotoxy(12,13);
    cout << "9      \t EXIT !                                                         "<<endl;
    
}

void addtokart()
{   
        string type,name1="none",name2="none",name3="name",name4="name",name5="name",name6="name";
        int price,total;
        int price1=0,price2=0,price3=0,price4=0,price5=0,price6=0;
        int x;
        int y;
        x=12;
        y=14;
    while  ( true )
    {   gotoxy(x,y);
    cout << "Your Option.... : ";
    cin >> number ;
        if (number <= 6)
        {
            
            gotoxy(x=x,y=y+1);
            
            cout << "Original or Copy: ";
            cin >> type;   
        }
        if (number == 1)
        {
            if (type == "Original")
            {
                price1 = 12000;
            }
            if (type == "Copy") 
            {
                price1 == 4000;
            }
            name1 = "T_Shirt";
            gotoxy(x,y=y+2);
            
         
        }
        if (number == 2)
        {
            if (type == "Original")
            {
                price2 = 20000;
            }
            if (type == "Copy") 
            {
                price2 == 6000;
            }
            name2 = "jordan_sneakers";
            gotoxy(x,y=y+2);
            
                
        }
        if (number == 3)
        {
            if (type == "Original")
            {
                price3 = 50000;
            }
            if (type == "Copy") 
            {
                price3 == 5000;
            }
            name3 ="THE_NORTH_FACE_sneakers";
            gotoxy(x,y=y+2);
            
        
        }
        if (number == 4)
        {
            if (type == "Original")
            {
                price4 = 13000;
            }
            if (type == "Copy") 
            {
                price4 == 45000;
            }
            name4 ="Nike_pants";
            gotoxy(x,y=y+2);
            
         
        }
        if (number == 5)
        {
            if (type == "Original")
            {
                price5 = 20000;
            }
            if (type == "Copy") 
            {
                price5 == 9000;
            }
            name5 ="Diners_Suit";
            gotoxy(x,y=y+2);
            
         
        }
        if (number == 6)
        {
            if (type == "Original")
            {
                price6 = 5000;
            }
            if (type == "Copy") 
            {
                price6 == 2000;
            }
            name6 ="Diners_tie";
                gotoxy(x,y=y+2);
            
         
        }
        
        total = price1+price2+price3+price4+price5+price6;
        if (number == 7)
        {   
            gotoxy(x=x,y=y+1);
            cout << "Your total cost is: $" << total << endl;
            gotoxy(x=x,y=y+2);
        }
        if (number == 8)
        {
            gotoxy(x=x,y=y+4);
            cout << "Name       \t      Price"<<endl;
            gotoxy(x=x,y=y+1);
            cout <<  name1 <<  "\t\t"   <<price1<<endl; 
            gotoxy(x=x,y=y+1);
            cout <<  name2 <<  "\t"   <<         price2<<endl;
            gotoxy(x=x,y=y+1);
            cout <<  name3 <<  "\t\t"   <<         price3<<endl;
            gotoxy(x=x,y=y+1);
            cout <<  name4 <<  "\t\t"   <<         price4<<endl;
            gotoxy(x=x,y=y+1);
            cout <<  name5 <<  "\t\t"   <<         price5<<endl;
            gotoxy(x=x,y=y+1);
            cout <<  name6 <<  "\t\t"   <<         price6<<endl;
            gotoxy(x=x,y=y+2);
        }
        if (number == 9)
        {
            system("cls");
            gotoxy(35,16);
            cout << "T H A N K S     A     L O T  !";
            Sleep(400);
            system("exit");
        }
    }

     
}