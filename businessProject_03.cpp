#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

//basic decor functions
void main_page();
void page_header();
void print_welcome();

//movement
void gotoxy(int x,int y);

// seller  functions
void seller_functions();
void Add_product(int product_number[100],string product_name[100],int product_price[100],int copy_price[100],int product_count);
void offered_products(int product_number[100],string product_name[100],int product_price[100],int copy_price[100],int product_count);
void Remove_product(int numR,int product_number[100],string product_name[100],int product_price[100],int copy_price[100],int product_count);
void Edit_original_price(int New_op,int Edit_op,int product_number[100],int product_price[100]);
void Edit_copy_price(int New_cp,int Edit_cp,int product_number[100],int copy_price[100]);
void Give_discount(int discount_pro_num, int discount_per,int product_number[100], int product_price[100], int copy_price[100]);
void Remove_discount(int Rdiscount_pro_num, int Rdiscount_per,int product_number[100], int product_price[100], int copy_price[100]);
void Contact_details(string phoneNumber);
void Edit_contact(string phoneNumber, string newContact);

// customer functions
void customer_functions();
void S_Add_product(int customer_total,int customer_kart_number[100],string customer_kart_name[100],int customer_kart_price[100],int &customer_kart_count,string item_type,int add_item,int product_number[100],string product_name[100],int product_price[100],int copy_price[100]);
void S_kart_items(int customer_total,int customer_kart_number[100],string customer_kart_name[100],int customer_kart_price[100],int customer_kart_count);
void S_remove_product(int SnumRx,int customer_total,int customer_kart_number[100],string customer_kart_name[100],int customer_kart_price[100],int customer_kart_count);

//signUP && signIn
void signUp(string Name[] , string Password[] , string Role[] , string username , string password , string role,int count_SignUp);
int signIn(string Name[] , string Password[] , string Role[] , string name2 , string password2 ,  int count_SignIn);

// press key
void press_forSignUp();
void press_forSignIn();

int main()
{
    int numR;
    string Name[100];
    string Password[100];
    string Role[100];
    string username;
    string password;
    string role;
    string name2;
    string password2;
    string customer_kart_name[100];
    int customer_kart_number[100];
    int customer_kart_price[100];
    int customer_kart_count = 0;
    int customer_total = 0;
    int count_SignUp = 0;
    int count_SignIn = 0;
    int product_count=0;
    string product_name[100];
    int product_price[100];
    int copy_price[100];
    int product_number[100];
    string phoneNumber = "03074633168";
    int option;
    int signin_Value ;
    while(true)
    {
        system("cls");
        main_page();
        gotoxy(95,26);
        cout << "Enter any option----- " ;
        cin >> option;
        page_header();
        if(option == 1)
        {
            gotoxy(57,13);
            cout << "Enter your name: ";
            cin >> username;
            gotoxy(57,14);
            cout << "Enter your password: ";
            cin >> password;
            gotoxy(57,15);
            cout << "Enter your role: ";
            cin >> role;
            signUp(Name , Password , Role, username , password , role, count_SignUp);
            count_SignUp ++;
            press_forSignUp();
        }
        if(option == 2)
        {
            gotoxy(57,14);
            cout << "Enter your name: ";
            cin >> name2;
            gotoxy(57,15);
            cout << "Enter your password: ";
            cin >> password2;
            signin_Value = signIn( Name ,  Password ,  Role ,  name2 , password2  , count_SignIn);
            // seller
            if(signin_Value == 1)
            {
                int option_seller;
                system("cls");
                print_welcome();
                press_forSignIn();
                while(true)
                {
                    system("cls");
                    offered_products( product_number,product_name, product_price, copy_price,  product_count);
                    cout << endl;
                    seller_functions();
                    cin >> option_seller;
                    if(option_seller == 1)
                    {
                        Add_product( product_number,product_name, product_price, copy_price, product_count);
                        product_count++;
                        Sleep(500);
                    }
                    if(option_seller == 2)
                    {
                        system("cls");
                        gotoxy(15,6);
                        cout << "Enter number of product you want to remove: ";
                        cin >> numR;
                        Remove_product( numR, product_number, product_name, product_price, copy_price, product_count);
                    }
                    if(option_seller == 3)
                    {
                        int Edit_op;
                        int New_op;
                        system("cls");
                        gotoxy(15,6);
                        cout << "Enter number of product you want to edit: ";
                        cin >> Edit_op;
                        gotoxy(15,7);
                        cout << "Enter new price: ";
                        cin >> New_op;
                        Edit_original_price(New_op,Edit_op, product_number, product_price);
                    }
                    if(option_seller == 4)
                    {
                        int Edit_cp;
                        int New_cp;
                        system("cls");
                        gotoxy(15,6);
                        cout << "Enter number of product you want to edit: ";
                        cin >> Edit_cp;
                        gotoxy(15,7);
                        cout << "Enter new price: ";
                        cin >> New_cp;
                        Edit_copy_price(New_cp,Edit_cp, product_number, copy_price); 
                    }
                    if(option_seller == 5)
                    {
                        int discount_pro_num;
                        int discount_per;
                        system("cls");
                        gotoxy(15,6);
                        cout << "Enter number of product you want to give discount on: ";
                        cin >> discount_pro_num;
                        gotoxy(15,7);
                        cout << "Enter discount% you want to offer: ";
                        cin >> discount_per;
                        Give_discount(discount_pro_num,  discount_per, product_number, product_price,  copy_price);
                    }
                    if(option_seller == 6)
                    {
                        int Rdiscount_pro_num;
                        int Rdiscount_per;
                        system("cls");
                        gotoxy(15,6);
                        cout << "Enter number of product you want to remove discount on: ";
                        cin >> Rdiscount_pro_num;
                        gotoxy(15,7);
                        cout << "Enter discount% you want to remove: ";
                        cin >> Rdiscount_per;
                        Remove_discount(Rdiscount_pro_num,  Rdiscount_per, product_number, product_price,  copy_price);
                    }
                    if(option_seller == 7)
                    {
                        system("cls");
                        Contact_details(phoneNumber);
                    }
                    if(option_seller == 8)
                    {
                        system("cls");
                        string newContact;
                        gotoxy(15,6);
                        cout << "Enter new contact number: ";
                        cin >> newContact;
                        Edit_contact(phoneNumber,newContact);
                    }
                    if(option_seller == 9)
                    {
                        break;
                    }
                }
            }
            // customer
            if(signin_Value == 2)
            {
                int option_customer;
                system("cls");
                print_welcome();
                press_forSignIn();
                while(true)
                {
                    system("cls");
                    offered_products( product_number,product_name, product_price, copy_price,  product_count);
                    cout << endl;
                    customer_functions();
                    cin >> option_customer;
                    if(option_customer == 1)
                    {
                        system("cls");
                        int add_item;
                        string item_type;
                        offered_products( product_number,product_name, product_price, copy_price,  product_count);
                        cout << endl;
                        cout << "Enter number of item to add: ";
                        cin >> add_item;
                        cout << "Enter type of item you want to purchase: ";
                        cin >> item_type;
                        S_Add_product(customer_total,customer_kart_number,customer_kart_name,customer_kart_price,customer_kart_count,item_type,add_item, product_number,product_name, product_price, copy_price);
                    }
                    if(option_customer == 2)
                    {
                        system("cls");
                        int SnumRx;
                        gotoxy(15,6);
                        cout << "Enter number of item to remove: ";
                        cin >> SnumRx;
                        S_remove_product(SnumRx,customer_total,customer_kart_number,customer_kart_name,customer_kart_price,customer_kart_count);

                    }
                    if(option_customer == 3)
                    {
                        S_kart_items(customer_total,customer_kart_number,customer_kart_name,customer_kart_price,customer_kart_count);
                        cout << endl;
                        cout << "press any key to continue";
                        getch();
                    }
                    if(option_customer == 4)
                    {
                        system("cls");
                        gotoxy(15,7);
                        cout << "your total bill is : " << customer_total ;
                        getch();
                    }
                    if(option_customer == 5)
                    {
                        system("cls");
                        int your_amount;
                        gotoxy(15,6);
                        cin >> your_amount;
                        cout << "Your balance is: " << your_amount-customer_total;
                        getch(); 
                    }
                    if(option_customer == 6)
                    {
                        system("cls");
                        Contact_details(phoneNumber);
                    }
                    if(option_customer == 7)
                    {
                        system("cls");
                        break;
                    }
                }
            }
            if(signin_Value == 4)
            {
                system("cls");
                gotoxy(15,10);
                cout << "Wrong option! please select a valid role--";
                gotoxy(15,11);
                cout << "press any button to continue!" << getch(); ;
            }
        }
    }
}

void signUp(string Name[] , string Password[] , string Role[] , string username , string password , string role, int count_SignUp)
{
    
    Name[count_SignUp] = username;
    
    Password[count_SignUp] = password;
    
    Role[count_SignUp] = role;
    
    
}

int signIn(string Name[] , string Password[] , string Role[] , string name2 , string password2 ,  int count_SignIn)
{
    int signin_value;
    for(int sin=0; true ; sin++ )
    {
        if(name2 == Name[sin] && password2 == Password[sin])
        {
            count_SignIn++;
            int validity_signin_check;
            if(Role[sin] == "seller")
            {
                return signin_value = 1;
                break;
            }
            if(Role[sin] == "customer")
            {
                return signin_value = 2;
                break;
            }
            else{
                // invalid account
                    return signin_value = 4;
                    break;
            }   
        }
    }
}

// Add products
void offered_products(int product_number[100],string product_name[100],int product_price[100],int copy_price[100],int product_count)
{
    cout << "\t\t                 Available Products             "<< endl;
    cout << "\tnum.\tName\t\tOriginal Price\t\tCopy Price"<<endl;
    for(int products_offered_count = 0; products_offered_count <= product_count;products_offered_count++ )
    {
        cout << "\t" << product_number[products_offered_count]<<"\t" << product_name[products_offered_count] << "\t\t" << product_price[products_offered_count] << "\t\t\t" << copy_price[products_offered_count] <<endl;
    }
}

// seller functions
void seller_functions()
{
    cout << "\t01--- Add a product" << endl;
    cout << "\t02--- Remove a product" << endl;
    cout << "\t03--- Edit product price" << endl;
    cout << "\t04--- Edit copy price" << endl;
    cout << "\t05--- Add discount" << endl;
    cout << "\t06--- Remove discount" << endl;
    cout << "\t07--- Show contact details" << endl;
    cout << "\t08--- Edit contact details" << endl;
    cout << "\t09--- LOG-OUT\n\n" << endl;
    cout << "\tEnter any option:--- ";
}
void Add_product(int product_number[100],string product_name[100],int product_price[100],int copy_price[100],int product_count)

{
    system("cls");
    string nameP;
    float priceP;
    float priceC;
    int nump;
    gotoxy(15,5);
    cout << "Enter product number: ";
    cin >> nump;
    product_number[product_count]=nump;
    gotoxy(15,6);
    cout << "Enter name of product: "  ;
    cin >> nameP;
    product_name[product_count]=nameP  ;
    gotoxy(15,7);
    cout << "Enter price of original: " ;
    cin >> priceP;
    product_price[product_count]=priceP  ;
    gotoxy(15,8);
    cout << "Enter price of copy: " ;
    cin >> priceC;
    copy_price[product_count]=priceC  ;
}
void Remove_product(int numR,int product_number[100],string product_name[100],int product_price[100],int copy_price[100],int product_count)
{
    for(int numRx =0; true;numRx++)
    {
        if(numR == product_number[numRx])
        {
            product_number[numRx]=0;
            product_name[numRx]="NIL";
            product_price[numRx]=0;
            copy_price[numRx]=0;
            break;
        }
    }
}
void Edit_original_price(int New_op,int Edit_op,int product_number[100],int product_price[100])
{
   for(int Edit_OP =0; true;Edit_OP++)
    {
        if(Edit_op == product_number[Edit_OP])
        {
            product_price[Edit_OP] = New_op;
            break;
        }
    } 
}
void Edit_copy_price(int New_cp,int Edit_cp,int product_number[100],int copy_price[100])
{
    for(int Edit_CP =0; true;Edit_CP++)
    {
        if(Edit_cp == product_number[Edit_CP])
        {
            copy_price[Edit_CP] = New_cp;
            break;
        }
    } 
}
void Give_discount(int discount_pro_num, int discount_per,int product_number[100], int product_price[100], int copy_price[100])
{
    for(int Disc_count =0; true;Disc_count++)
    {
        if(discount_pro_num == product_number[Disc_count])
        {
            product_price[Disc_count] =product_price[Disc_count] - ((discount_per * product_price[Disc_count])/100);
            copy_price[Disc_count] =copy_price[Disc_count] - ((discount_per * copy_price[Disc_count])/100);
            break;
        }
    }
}
void Remove_discount(int Rdiscount_pro_num, int Rdiscount_per,int product_number[100], int product_price[100], int copy_price[100])
{
    for(int RDisc_count =0; true;RDisc_count++)
    {
        if(Rdiscount_pro_num == product_number[RDisc_count])
        {
            product_price[RDisc_count] =(product_price[RDisc_count] / (100-Rdiscount_per) )*100;
            copy_price[RDisc_count] =(copy_price[RDisc_count] / (100-Rdiscount_per) )*100;
            break;
        }
    }
}
void Contact_details(string phoneNumber)
{
    system("color 01");
    gotoxy(15,6);
    cout << "Call us on : " << phoneNumber  ;
    gotoxy(15,8);
    cout << "Mail us on : chorbazarseller0001@gmail.com " ;
    gotoxy(15,10);
    cout << "Follow our social-media account: chorB@zar--seller01 ";
    gotoxy(15,12);
    cout << "You can visit our store for further details at: \"area-51,street-21,xyz market\"";
    getch();
}
void Edit_contact(string phoneNumber , string newContact)
{
    phoneNumber=newContact;
}

// customer functions
void customer_functions()
{
    cout << "\t01--- Add a product" << endl;
    cout << "\t02--- Remove a product" << endl;
    cout << "\t03--- Show total products added in kart" << endl;
    cout << "\t04--- Calculate total bill" << endl;
    cout << "\t05--- Pay the amount" << endl;
    cout << "\t06--- Contact details of seller" << endl;
    cout << "\t07--- LOG-OUT\n\n" << endl;
    cout << "\tEnter any option:--- ";
}
void S_Add_product(int customer_total,int customer_kart_number[100],string customer_kart_name[100],int customer_kart_price[100],int &customer_kart_count,string item_type,int add_item,int product_number[100],string product_name[100],int product_price[100],int copy_price[100])
{
    for(int numAx = 0; true;numAx++)
    {
        if(add_item == product_number[numAx])
        {
            if(item_type == "original")
            {
                customer_kart_number[numAx] = customer_kart_count+1;
                customer_kart_name[numAx] = product_name[numAx];
                customer_kart_price[numAx] = product_price[numAx];
                customer_total = customer_total + customer_kart_price[numAx];
                customer_kart_count++;
                break;
            }
            if(item_type == "copy")
            {
                customer_kart_number[numAx] = customer_kart_count+1;
                customer_kart_name[numAx] = product_name[numAx];
                customer_kart_price[numAx] = copy_price[numAx];
                customer_total = customer_total + customer_kart_price[numAx];
                customer_kart_count++;
                break;
            }
        }
    }
}
void S_kart_items(int customer_total,int customer_kart_number[100],string customer_kart_name[100],int customer_kart_price[100],int customer_kart_count)
{
    system("cls");
    cout << "\t\t\tTotal products" << endl;
    cout << "\t\tNum\t\tName\t\tPrice" <<endl;
    for (int kart_item_count= 0 ; kart_item_count <= customer_kart_count ; kart_item_count++)
    {
        cout << "\t\t"<<customer_kart_number[kart_item_count] << "\t\t"<<customer_kart_name[kart_item_count] << "\t\t" << customer_kart_price[kart_item_count]<<endl;
    }
}
void S_remove_product(int SnumRx,int customer_total,int customer_kart_number[100],string customer_kart_name[100],int customer_kart_price[100],int customer_kart_count)
{
    for(int S_numRx =0; true;S_numRx++)
    {
        if(SnumRx == customer_kart_number[S_numRx])
        {
            customer_kart_number[S_numRx] = 0 ;
            customer_kart_name[S_numRx] = "Nil" ;
            customer_total = customer_total - customer_kart_price[S_numRx];
            customer_kart_price[S_numRx] = 0 ;
            break;
        }
    }
}


// decors
void print_welcome()
{
    gotoxy(8,5);
    cout << "                             ,,                                                " << endl;
    gotoxy(8,6);
    cout << "                           `7MM                                                " << endl;
    gotoxy(8,6);
    cout << "                             MM                                                " << endl;
    gotoxy(8,8);
    cout << " 7M'    ,A    `MF' .gP\"Ya    MM   ,p6\"bo   ,pW\"Wq.   7MMpMMMb.pMMMb.   .gP\"Ya  " << endl;
    gotoxy(8,9);
    cout << "  VA   ,VAA   ,V  ,M'   Yb   MM  6M'  OO  6W'   `Wb   MM    MM    MM  ,M'   Yb " << endl;
    gotoxy(8,10);
    cout << "   VA ,V  VA ,V   8M  EEEE   MM 8M        8M     M8   MM    MM    MM  8M  EEEE  " << endl;
    gotoxy(8,11);
    cout << "    VVV    VVV    YM.    ,   MM  YM.    , YA.   ,A9   MM    MM    MM  YM.    , " << endl;
    gotoxy(8,12);
    cout << "     W      W      `Mbmmd' .JMML. YMbmd'   `Ybmd9'  .JMML  JMML  JMML. `Mbmmd' " << endl; 
     
}

void press_forSignIn()
{
    gotoxy(17,16);
    cout << "You are successfull signed in!";
    gotoxy(17,17);
    cout << "Press any key to continue!-- ";
    getch();
}

void press_forSignUp()
{
    gotoxy(57,16);
    cout << "You are successfull signed up!";
    gotoxy(57,17);
    cout << "Press any key to continue!-- ";
    getch();
}

void main_page()
{
        system("color 0E");
    cout << "************************************************************************************************************************************************************************"<<endl;
    Sleep(25);
    cout << "************************************************************************************************************************************************************************"<<endl;
    Sleep(25);
    cout << "**                                                                                                                                                                    **"<<endl;
    Sleep(25);
    cout << "**                                                                                                                                                                    **"<<endl;
    Sleep(25);
    cout << "**                                           .o88b. db   db  .d88b.  d8888b.   d8888b.  .d8b.  d88888D  .d8b.  d8888b.                                                **"<<endl;
    Sleep(25);
    cout << "**                                          d8P  Y8 88   88 .8P  Y8. 88  `8D   88  `8D d8' `8b YP  d8' d8' `8b 88  `8D                                                **"<<endl;
    Sleep(25);
    cout << "**                                          8P      88ooo88 88    88 88oobY'   88oooY' 88ooo88    d8'  88ooo88 88oobY'                                                **"<<endl;
    Sleep(25);
    cout << "**                                          8b      88~~~88 88    88 88`8b     88~~~b. 88~~~88   d8'   88~~~88 88`8b                                                  **"<<endl;
    Sleep(25);
    cout << "**                                          Y8b  d8 88   88 `8b  d8' 88 `88.   88   8D 88   88  d8' db 88   88 88 `88.                                                **"<<endl;
    Sleep(25);
    cout << "**                                           `Y88P' YP   YP  `Y88P'  88   YD   Y8888P' YP   YP d88888P YP   YP 88   YD                                                **"<<endl;
    Sleep(25);
    cout << "**                                                                                                                                                                    **"<<endl;
    Sleep(25);
    cout << "**                                                                                                                                                                    **"<<endl;
    Sleep(25);
    cout << "**                                                                                                                                                                    **"<<endl;
    Sleep(25);
    cout << "**                                                                                                                                                                    **"<<endl;
    Sleep(25);
    cout << "**                                                                                                                                                                    **"<<endl;
    Sleep(25);
    cout << "************************************************************************************************************************************************************************"<<endl;
    Sleep(25);
    cout << "************************************************************************************************************************************************************************"<<endl;
    Sleep(25);
    cout << "**                                                                           **                                                                                       **"<<endl;
    Sleep(25);
    cout << "**                                                                           **                                                                                       **"<<endl;
    Sleep(25);
    cout << "**                                                                           **                                                                                       **"<<endl;
    Sleep(25);
    cout << "**                                                                           **                                                                                       **"<<endl;
    Sleep(25);
    cout << "**                                                                           **                                                                                       **"<<endl;
    Sleep(25);
    cout << "**                                                                           **                                                                                       **"<<endl;
    Sleep(25);
    cout << "**                                                                           **                                                                                       **"<<endl;
    Sleep(25);
    cout << "**                                                                           **                                                                                       **"<<endl;
    Sleep(25);
    cout << "**                                                                           **                                                                                       **"<<endl;
    Sleep(25);
    cout << "**                                                                           **                                                                                       **"<<endl;
    Sleep(25);
    cout << "**                                                                           **                                                                                       **"<<endl;
    Sleep(25);
    cout << "**                                                                           **                                                                                       **"<<endl;
    Sleep(25);
    cout << "**                                                                           **                                                                                       **"<<endl;
    Sleep(25);
    cout << "**                                                                           **                                                                                       **"<<endl;
    Sleep(25);
    cout << "**                                                                           **                                                                                       **"<<endl;
    Sleep(25);
    cout << "**                                                                           **                                                                                       **"<<endl;
    Sleep(25);
    cout << "**                                                                           **                                                                                       **"<<endl;
    Sleep(25);
    cout << "**                                                                           **                                                                                       **"<<endl;
    Sleep(25);
    cout << "**                                                                           **                                                                                       **"<<endl;
    Sleep(25);
    cout << "**                                                                           **                                                                                       **"<<endl;
    Sleep(25);
    cout << "**                                                                           **                                                                                       **"<<endl;
    Sleep(25);
    cout << "**                                                                           **                                                                                       **"<<endl;
    Sleep(25);
    cout << "**                                                                           **                                                                                       **"<<endl;
    Sleep(25);
    cout << "**                                                                           **                                                                                       **"<<endl;
    Sleep(25);
    cout << "**                                                                           **                                                                                       **"<<endl;
    Sleep(25);
    cout << "************************************************************************************************************************************************************************"<<endl;
    Sleep(25);
    cout << "************************************************************************************************************************************************************************"<<endl;
    
    gotoxy(6,17);
    cout << " _____  __                 _                                     " <<endl;
    gotoxy(6,18);  
    cout << "|  _  |/  |               (_)                                    " <<endl;  
    gotoxy(6,19);
    cout << "| |/  |`| |           ___  _   __ _  _ __    _   _  _ __         " <<endl;  
    gotoxy(6,20);
    cout << "|  /| | | |          / __|| | / _` ||  _ \\  | | | ||  _ \\      " <<endl;  
    gotoxy(6,21);
    cout << "\\ |_/ /_| |_         \\__ \\| || (_| || | | | | |_| || |_) |    " <<endl;  
    gotoxy(6,22);
    cout << " \\___/ \\___/         |___/|_| \\__, ||_| |_|  \\__,_|| .__/    " <<endl;  
    gotoxy(6,23);
    cout << "             ______            __/ |               | |           " <<endl;  
    gotoxy(6,24);
    cout << "            |______|          |___/                |_|           " <<endl;            
    gotoxy(6,25);
    cout << " _____  _____                _                 _                 " <<endl;         
    gotoxy(6,26);
    cout << "|  _  |/ __  \\              (_)               (_)               " <<endl;      
    gotoxy(6,27);
    cout << "| |/  |`  / /           ___  _   __ _  _ __    _  _ __           " <<endl;    
    gotoxy(6,28);
    cout << "|  /| |  / /           / __|| | / _` ||  _ \\  | ||  _ \\        " <<endl;    
    gotoxy(6,29);
    cout << "\\ |_/ /./ /___         \\__ \\| || (_| || | | | | || | | |      " <<endl;             
    gotoxy(6,30);
    cout << " \\___/ \\_____/         |___/|_| \\__, ||_| |_| |_||_| |_|      " <<endl;                 
    gotoxy(6,31);
    cout << "               ______            __/ |                           " <<endl;                     
    gotoxy(6,32);
    cout << "              |______|          |___/                            " <<endl;                   
    gotoxy(6,33);
    cout << " _____  _____                       _  _                         " <<endl;          
    gotoxy(6,34);
    cout << "|  _  ||____ |                     (_)| |                        " <<endl;                          
    gotoxy(6,35);
    cout << "| |/' |    / /           ___ __  __ _ | |_                       " <<endl;      
    gotoxy(6,36);
    cout << "|  /| |    \\ \\          / _ \\\\ \\/ /| || __|                 " <<endl;                          
    gotoxy(6,37);
    cout << "\\ |_/ /.___/ /         |  __/ >  < | || |_                      " <<endl;                      
    gotoxy(6,38);
    cout << " \\___/ \\____/           \\___|/_/\\_\\|_| \\__|                " <<endl;                              
    gotoxy(6,39);
    cout << "               ______                                            " <<endl;                              
    gotoxy(6,40);
    cout << "              |______|                                           " <<endl;    


}

void page_header()
{
    system("cls");
    gotoxy(54,10);
    Sleep(25);
    cout << "************************************************" << endl;
    gotoxy(54,11);    
    Sleep(25);
    cout << "************************************************" << endl;
    gotoxy(54,12); 
    Sleep(25);
    cout << "**                                            **" << endl;
    gotoxy(54,13); 
    Sleep(25);
    cout << "**                                            **" << endl;
    gotoxy(54,14); 
    Sleep(25);
    cout << "**                                            **" << endl;
    gotoxy(54,15); 
    Sleep(25);
    cout << "**                                            **" << endl;
    gotoxy(54,16); 
    Sleep(25);
    cout << "**                                            **" << endl;
    gotoxy(54,17); 
    Sleep(25);
    cout << "**                                            **" << endl;
    gotoxy(54,18); 
    Sleep(25);
    cout << "**                                            **" << endl;
    gotoxy(54,19); 
    Sleep(25);
    cout << "**                                            **" << endl;
    gotoxy(54,20); 
    Sleep(25);
    cout << "************************************************" << endl;
    gotoxy(54,21);    
    Sleep(25);
    cout << "************************************************" << endl;
}

void gotoxy(int x,int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}