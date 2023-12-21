#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <stdexcept>
#include <fstream>
#include <cctype>
using namespace std;

int strToInt(string s);

// file handling
void save_Users(int count_SignUp, string Name[] , string Password[] , string Role[] );
void load_Users(int &count_SignIn, string Name[] , string Password[] , string Role[] );
string getdata(string data , int comma);

// product file handling
void save_product(int product_number[],string product_name[],int product_price[],int copy_price[],int product_count);
void load_product(int product_number[],string product_name[],int product_price[],int copy_price[],int &product_count);
string getdataP(string data , int comma);

//basic decor functions
string setcolor(unsigned short color);
void main_page();
void page_header();
void print_welcome();
void print_Addproducts();

// validity check
bool containsNumber(const string& name);
bool userExist(string username, int count_SignUp, string Name[]);
bool commaExistname(string username );
bool commaExistpass(string password );
bool commaExistproduct(string nameP );
bool containsNumberP(string price);
bool numberExists(int nump, int product_number[], int product_count);
bool containsAlp(string num, int product_number[], int product_count);
bool nameExists(string name, string product_name[], int product_count);

//movement
void gotoxy(int x,int y);

// seller  functions
void seller_header();
void seller_functions();
void Add_product(int product_number[100],string product_name[100],int product_price[100],int copy_price[100],int &product_count);
void offered_products(int product_number[100],string product_name[100],int product_price[100],int copy_price[100],int product_count);
void Remove_product(int numR,int product_number[100],string product_name[100],int product_price[100],int copy_price[100],int &product_count);
void Edit_original_price(int New_op,int Edit_op,int product_number[100],int product_price[100]);
void Edit_copy_price(int New_cp,int Edit_cp,int product_number[100],int copy_price[100]);
void Give_discount(int discount_pro_num, int discount_per,int product_number[100], int product_price[100], int copy_price[100]);
void Remove_discount(int Rdiscount_pro_num, int Rdiscount_per,int product_number[100], int product_price[100], int copy_price[100]);
void Contact_details(string phoneNumber, string eMial);
void Edit_contact(string &phoneNumber, string newContact , string &eMail , string newEmail);

// customer functions
void customer_header();
void customer_functions();
void S_Add_product(int customer_total,int customer_kart_number[100],string customer_kart_name[100],int customer_kart_price[100],int &customer_kart_count,string item_type,int add_item,int product_number[100],string product_name[100],int product_price[100],int copy_price[100]);
void S_kart_items(int customer_total,int customer_kart_number[100],string customer_kart_name[100],int customer_kart_price[100],int customer_kart_count);
void S_remove_product(int SnumRx,int customer_total,int customer_kart_number[100],string customer_kart_name[100],int customer_kart_price[100],int customer_kart_count);

//signUP && signIn
void signUp(string Name[] , string Password[] , string Role[] , string username , string password , string role,int &count_SignUp);
string signIn(string Name[] , string Password[] , string Role[] , string name2 , string password2 ,  int &count_SignIn);

// press key
void press_forSignUp();
void press_forSignIn();

int main()
{
    string numR;
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
    string eMail = "xyz@gmail.com";
    string option;
    string signin_Value ;
    while(true)
    {
    load_Users(count_SignUp,  Name ,  Password ,  Role );
    load_product( product_number, product_name, product_price, copy_price, product_count);
        system("cls");
        main_page();
        gotoxy(95,26);
        cout << "Enter any option----- " ;
        cin >> option;
        if(option == "1")
        {
            while(true)    
            {   
                setcolor(3);
                page_header();
                setcolor(6);
                gotoxy(57,13);
                cout << "Enter your name: ";
                cin >> username;
                if(commaExistname(username))
                {
                    system("cls");
                    setcolor(3);
                    page_header();
                    gotoxy(57,16);
                    setcolor(6);
                    cout << "Username can not have a comma! try another name..";
                    getch();
                }
                else{
                        if(containsNumber(username))
                        {
                            system("cls");
                            setcolor(3);
                            page_header();
                            gotoxy(57,16);
                            setcolor(6);
                            cout << "Please enter any valid name without numbers!";
                            getch();
                        }
                        else{
                            if(userExist(username,count_SignUp,Name))
                            {   
                                system("cls");
                                setcolor(3);
                                page_header();
                                gotoxy(57,16);
                                setcolor(6);
                                cout << "User already exist! Enter another name";
                                getch();
                            }
                            else{
                                gotoxy(57,14);
                                cout << "Enter your password: ";
                                cin >> password;
                                if(commaExistpass(password))
                                {
                                    system("cls");
                                    setcolor(3);
                                    page_header();
                                    gotoxy(57,16);
                                    setcolor(6);
                                    cout << "Password can not have a comma! try another name..";
                                    getch();
                                }
                                else{
                                    gotoxy(57,15);
                                    cout << "Enter your role: ";
                                    cin >> role;
                                    if(role != "seller" && role != "customer")
                                    {
                                        setcolor(3);
                                        page_header();
                                        gotoxy(57,15);
                                        setcolor(6);
                                        cout << "Please enter any valid role!";
                                        getch();
                                    }
                                    if(role == "seller" || role == "customer")
                                    {
                                        signUp(Name , Password , Role, username , password , role, count_SignUp);
                                        count_SignUp ++;
                                        save_Users(count_SignUp,  Name ,  Password ,  Role );
                                        press_forSignUp();
                                        break;
                                    }
                            }
                        }
                    }    
                }           
            }      
        }
        if(option == "2")
        {
            setcolor(3);
            page_header();
            setcolor(6);
            gotoxy(57,14);
            cout << "Enter your name: ";
            cin >> name2;
            gotoxy(57,15);
            cout << "Enter your password: ";
            cin >> password2;
            signin_Value = signIn( Name ,  Password ,  Role ,  name2 , password2  , count_SignIn);


            // seller
            if(signin_Value == "1")
            {
                string option_seller;
                system("cls");
                setcolor(4);
                print_welcome();
                setcolor(6);
                press_forSignIn();
                while(true)
                {
                    system("cls");
                    cout << endl;
                    seller_header();
                    setcolor(5);
                    seller_functions();
                    cin >> option_seller;
                    setcolor(6);
                    if(option_seller == "1")
                    {
                        
                        Add_product( product_number,product_name, product_price, copy_price, product_count);
                        product_count++;
                        Sleep(500);
                    }
                    if(option_seller == "2")
                    {
                        system("cls");
                        gotoxy(15,6);
                        setcolor(4);
                        cout << "Enter number of product you want to remove: ";
                        cin >> numR;
                        if(!containsNumberP(numR))
                        {
                            system("cls");
                            setcolor(3);
                            page_header();
                            gotoxy(57,16);
                            setcolor(6);
                            cout << "number can not have a comma and alphabets!";
                            getch();
                        }
                        else
                        {
                            Remove_product( strToInt(numR), product_number, product_name, product_price, copy_price, product_count);
                        }
                        setcolor(6);
                    }
                    if(option_seller == "3")
                    {
                        string Edit_op;
                        string New_op;
                        system("cls");
                        gotoxy(15,6);
                        setcolor(4);
                        cout << "Enter number of product you want to edit: ";
                        cin >> Edit_op;
                        if(!containsNumberP(Edit_op))
                        {
                            system("cls");
                            setcolor(3);
                            page_header();
                            gotoxy(57,16);
                            setcolor(6);
                            cout << "number can not have symbols and alphabets!";
                            getch();
                        }
                        else
                        {
                            gotoxy(15,7);
                            cout << "Enter new price: ";
                            cin >> New_op;
                            if(!containsNumberP(Edit_op))
                            {
                                system("cls");
                                setcolor(3);
                                page_header();
                                gotoxy(57,16);
                                setcolor(6);
                                cout << "price can not have symbols and alphabets!";
                                getch();
                            }  
                            else
                            { 
                                Edit_original_price(strToInt(New_op),strToInt(Edit_op), product_number, product_price);
                            }
                        }
                        setcolor(6);
                    }
                    if(option_seller == "4")
                    {
                        string Edit_cp;
                        string New_cp;
                        system("cls");
                        gotoxy(15,6);
                        setcolor(5);
                        cout << "Enter number of product you want to edit: ";
                        cin >> Edit_cp;
                        if(!containsNumberP(Edit_cp))
                        {
                            system("cls");
                            setcolor(3);
                            page_header();
                            gotoxy(57,16);
                            setcolor(6);
                            cout << "number can not have a comma and alphabets!";
                            getch();
                        }
                        else
                        {
                            gotoxy(15,7);
                            cout << "Enter new price: ";
                            cin >> New_cp;
                            if(!containsNumberP(Edit_cp))
                            {
                                system("cls");
                                setcolor(3);
                                page_header();
                                gotoxy(57,16);
                                setcolor(6);
                                cout << "price can not have a comma and alphabets!";
                                getch();
                            }
                            else
                            {
                                Edit_copy_price(strToInt(New_cp),strToInt(Edit_cp), product_number, copy_price); 
                            }
                        }
                        setcolor(6);
                    }
                    if(option_seller == "5")
                    {
                        string discount_pro_num;
                        string discount_per;
                        system("cls");
                        gotoxy(15,6);
                        cout << "Enter number of product you want to give discount on: ";
                        cin >> discount_pro_num;
                        if(!containsNumberP(discount_pro_num))
                            {
                                system("cls");
                                setcolor(3);
                                page_header();
                                gotoxy(57,16);
                                setcolor(6);
                                cout << "discount can not have a comma and alphabets!";
                                getch();
                            }
                        else
                        {
                            gotoxy(15,7);
                            cout << "Enter discount % you want to offer: ";
                            cin >> discount_per;
                            if(!containsNumberP(discount_per))
                            {
                                system("cls");
                                setcolor(3);
                                page_header();
                                gotoxy(57,16);
                                setcolor(6);
                                cout << "discount can not have a comma and alphabets!";
                                getch();
                            }
                            else
                            {
                                Give_discount(strToInt(discount_pro_num),  strToInt(discount_per), product_number, product_price,  copy_price);
                            }
                        }
                    }
                    if(option_seller == "6")
                    {
                        string Rdiscount_pro_num;
                        string Rdiscount_per;
                        system("cls");
                        gotoxy(15,6);
                        cout << "Enter number of product you want to remove discount on: ";
                        cin >> Rdiscount_pro_num;
                        if(!containsNumberP(Rdiscount_pro_num))
                            {
                                system("cls");
                                setcolor(3);
                                page_header();
                                gotoxy(57,16);
                                setcolor(6);
                                cout << "discount can not have a comma and alphabets!";
                                getch();
                            }
                        else
                        {
                            gotoxy(15,7);
                            cout << "Enter discount % you want to remove: ";
                            cin >> Rdiscount_per;
                            if(!containsNumberP(Rdiscount_per))
                            {
                                system("cls");
                                setcolor(3);
                                page_header();
                                gotoxy(57,16);
                                setcolor(6);
                                cout << "discount can not have a comma and alphabets!";
                                getch();
                            }
                            else
                            {
                            Remove_discount(strToInt(Rdiscount_pro_num),  strToInt(Rdiscount_per), product_number, product_price,  copy_price);
                            }
                        }
                    }
                    if(option_seller == "7")
                    {
                        system("cls");
                        Contact_details(phoneNumber,eMail);
                    }
                    if(option_seller == "8")
                    {
                        system("cls");
                        string newContact;
                        string newEmail;
                        setcolor(6);
                        gotoxy(15,6);
                        cout << "Enter new contact number: ";
                        cin >> newContact;
                        gotoxy(15,8);
                        cout << "Enter new email: ";
                        cin >> newEmail;
                        Edit_contact(phoneNumber,newContact,eMail,newEmail);
                        setcolor(3);
                    }
                    if(option_seller == "9")
                    {
                        system("cls");
                        offered_products( product_number,product_name, product_price, copy_price,  product_count);
                        getch();
                    }
                    if(option_seller == "10")
                    {
                        break;
                    }
                    if(option_seller != "1"&&option_seller != "2"&&option_seller != "3"&&option_seller != "4"&&option_seller != "5"&&option_seller != "6"&&option_seller != "7"&&option_seller != "8"&&option_seller != "9"&&option_seller != "10")
                    {
                        system("cls");
                        setcolor(5);
                        page_header();
                        setcolor(6);
                        gotoxy(57,15);
                        cout << "Please enter any valid option!";
                        getch();
                    }
                }
            }
            // customer
            if(signin_Value == "2")
            {
                string option_customer;
                system("cls");
                print_welcome();
                press_forSignIn();
                while(true)
                {
                    system("cls");
                    customer_header();
                    cout << endl;
                    customer_functions();
                    cin >> option_customer;
                    if(option_customer == "1")
                    {
                        system("cls");
                        string add_item;
                        string item_type;
                        offered_products( product_number,product_name, product_price, copy_price,  product_count);
                        cout << endl;
                        cout << "Enter number of item to add: ";
                        cin >> add_item;
                        if(!containsNumberP(add_item))
                        {
                            system("cls");
                            setcolor(3);
                            page_header();
                            gotoxy(57,16);
                            setcolor(6);
                            cout << "number can not have a comma and alphabets!";
                            getch();
                        }
                        else
                        {
                            cout << "Enter type of item you want to purchase: ";
                            cin >> item_type;
                            if(item_type != "copy" && item_type != "original")
                            {
                                system("cls");
                                setcolor(3);
                                page_header();
                                gotoxy(57,16);
                                setcolor(6);
                                cout << "enter b/w \"copy\" or \"original\"!";
                                getch();
                            }
                            else
                            {
                                S_Add_product(customer_total,customer_kart_number,customer_kart_name,customer_kart_price,customer_kart_count,item_type,strToInt(add_item), product_number,product_name, product_price, copy_price);
                            }
                        }
                    }
                    if(option_customer == "2")
                    {
                        system("cls");
                        string SnumRx;
                        gotoxy(15,6);
                        cout << "Enter number of item to remove: ";
                        cin >> SnumRx;
                        if(!containsNumber(SnumRx))
                        {
                            system("cls");
                            setcolor(3);
                            page_header();
                            gotoxy(57,16);
                            setcolor(6);
                            cout << "number can not have a comma and alphabets!";
                            getch(); 
                        }
                        else
                        {
                            S_remove_product(strToInt(SnumRx),customer_total,customer_kart_number,customer_kart_name,customer_kart_price,customer_kart_count);
                        }
                    }
                    if(option_customer == "3")
                    {
                        S_kart_items(customer_total,customer_kart_number,customer_kart_name,customer_kart_price,customer_kart_count);
                        cout << endl;
                        cout << "press any key to continue";
                        getch();
                    }
                    if(option_customer == "4")
                    {
                        system("cls");
                        gotoxy(15,7);
                        cout << "your total bill is : " << customer_total ;
                        getch();
                    }
                    if(option_customer == "5")
                    {
                        system("cls");
                        string your_amount;
                        int cash_back;
                        gotoxy(15,6);
                        cout << "Your Total bill is " << customer_total<<endl;
                        gotoxy(15,7);
                        cout << "Enter your cash";
                        cin >> your_amount;
                        if(!containsNumber(your_amount))
                        {
                            system("cls");
                            setcolor(3);
                            page_header();
                            gotoxy(57,16);
                            setcolor(6);
                            cout << "amount can not have a comma and alphabets!";
                            getch(); 
                        }
                        else
                        {
                            cash_back = strToInt(your_amount)-customer_total;
                            if(cash_back < 0)
                            {
                                cash_back = -(cash_back);
                                cout << "your remaining bill is: " << cash_back ;
                            }
                            else
                            {
                                cout << "Your balance is: " << cash_back;
                            }
                            
                            getch(); 
                        }
                    }
                    if(option_customer == "6")
                    {
                        system("cls");
                        Contact_details(phoneNumber,eMail);
                    }
                    if(option_customer == "7")
                    {
                        system("cls");
                        setcolor(4);
                        offered_products( product_number,product_name, product_price, copy_price,  product_count);
                        setcolor(6);
                    }
                    if(option_customer == "8")
                    {
                        system("cls");
                        break;
                    }
                    else{
                        system("cls");
                        setcolor(3);
                        page_header();
                        gotoxy(57,16);
                        setcolor(6);
                        cout << "Please enter any valid option!";
                        getch();
                    }
                }
            }
            if(signin_Value == "4")
            {
                system("cls");
                setcolor(3);
                page_header();
                gotoxy(57,16);
                setcolor(6);
                cout << "User does not exist!";
                gotoxy(57,17);
                cout << "Press any button to continue..";
                getch();
            }
        }
        else if (option == "3")
        {
            save_product( product_number, product_name, product_price, copy_price, product_count);
            break;
        }
        else if(option != "1" && option != "2" && option != "3")
        {
            setcolor(3);
            page_header();
            setcolor(6);
            gotoxy(57,13);
            cout << "Please enter any valid option!";
            getch();
        }
    }
}

void signUp(string Name[] , string Password[] , string Role[] , string username , string password , string role, int &count_SignUp)
{
    
    Name[count_SignUp] = username;
    
    Password[count_SignUp] = password;
    
    Role[count_SignUp] = role;
    
}
string signIn(string Name[] , string Password[] , string Role[] , string name2 , string password2 ,  int &count_SignIn)
{
    string signin_value;
    for(int sin=0; true ; sin++ )
    {
        if(name2 == Name[sin] && password2 == Password[sin])
        {
            count_SignIn++;
            int validity_signin_check;
            if(Role[sin] == "seller")
            {
                return signin_value = "1";
                break;
            }
            else if(Role[sin] == "customer")
            {
                return signin_value = "2";
                break;
            }   
        }
        else
        {
            return signin_value = "4";
        }
    }
        return signin_value = "3";
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
    cout << "\t09--- Show offered products" << endl;
    cout << "\t10--- LOG-OUT\n\n" << endl;
    cout << "\tEnter any option:--- ";
}
// Add products
void Add_product(int product_number[100],string product_name[100],int product_price[100],int copy_price[100],int &product_count)

{
    while(true)
    {
        system("cls");
        print_Addproducts();
        int numint;
        string nameP;
        string priceP;
        string priceC;
        string nump;
        gotoxy(15,10);
        try
        {
            cout << "Enter product number: ";
            cin >> nump;
            if(!containsNumberP(nump))
            {
                system("cls");
                setcolor(3);
                page_header();
                gotoxy(57,16);
                setcolor(6);
                cout << "number can not have symbols and alphabets!";
                getch();
            }
            else
            {
                if(numberExists(strToInt(nump), product_number, product_count))
                {
                    system("cls");
                    setcolor(3);
                    page_header();
                    gotoxy(57,16);
                    setcolor(6);
                    cout << "number already exists!";
                    getch();
                }
                else
                {
                    int num = strToInt(nump);
                    product_number[product_count]=strToInt(nump);
                    gotoxy(15,11);
                    cout << "Enter name of product: "  ;
                    cin >> nameP;
                    if(commaExistproduct( nameP ))
                    {
                        system("cls");
                        setcolor(3);
                        page_header();
                        gotoxy(57,16);
                        setcolor(6);
                        cout << "name can not have a comma! try another name..";
                        getch();
                    }
                    else
                    {
                        if(nameExists(nameP, product_name, product_count))
                        {
                            system("cls");
                            setcolor(3);
                            page_header();
                            gotoxy(57,16);
                            setcolor(6);
                            cout << "name already exists!..";
                            getch();
                        }
                        else
                        {
                            product_name[product_count]=nameP  ;
                            gotoxy(15,12);
                            cout << "Enter price of original: " ;
                            cin >> priceP;
                            if(!containsNumberP(priceP))
                            {
                                system("cls");
                                setcolor(3);
                                page_header();
                                gotoxy(57,16);
                                setcolor(6);
                                cout << "price can not have commas and alphabets!";
                                getch();
                            }
                            else
                            {
                                product_price[product_count]=strToInt(priceP)  ;
                                gotoxy(15,13);   
                                cout << "Enter price of copy: " ;
                                cin >> priceC;
                                if(!containsNumberP(priceC))
                                {
                                    system("cls");
                                    setcolor(3);
                                    page_header();
                                    gotoxy(57,16);
                                    setcolor(6);
                                    cout << "price can not have commas and alphabets!";
                                    getch();
                                }
                                else
                                {
                                    copy_price[product_count]=strToInt(priceC)  ;
                                    system("cls");
                                    break;
                                }
                            } 
                        }              
                    }
                } 
            }   
        }
        catch (const invalid_argument& e) 
        {
            Sleep(1200);
            setcolor(3);
            page_header();
            setcolor(6);
            gotoxy(57,13);
            cout << "Please enter any valid option!";
            getch();
        }
    }
}   

void Remove_product(int numR,int product_number[100],string product_name[100],int product_price[100],int copy_price[100],int &product_count)
{
    for(int numRx =0; numRx<product_count ;numRx++)
    {
        if(numR == product_number[numRx])
        {
            while(numRx < product_count)
            {
                product_number[numRx]=product_number[numRx+1]-1;
                product_name[numRx]=product_name[numRx+1];
                product_price[numRx]=product_price[numRx+1];
                copy_price[numRx]=copy_price[numRx+1];
                product_count--;
                break;
            } 
        } 
        else
        {
            system("cls");
            setcolor(3);
            page_header();
            gotoxy(57,16);
            setcolor(6);
            cout << "product with this number does not exist!";
            getch();
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
void Contact_details(string phoneNumber, string eMail)
{
    system("color 01");
    gotoxy(15,6);
    cout << "Call us on : " << phoneNumber  ;
    gotoxy(15,8);
    cout << "Mail us on : " << eMail ;
    gotoxy(15,10);
    cout << "Follow our social-media account: chorB@zar--seller01 ";
    gotoxy(15,12);
    cout << "You can visit our store for further details at: \"area-51,street-21,xyz market\"";
    getch();
}
void offered_products(int product_number[100],string product_name[100],int product_price[100],int copy_price[100],int product_count)
{
    cout << "\t\t                 Available Products             "<< endl;
    cout << "\tnum.\tName\t\tOriginal Price\t\tCopy Price"<<endl;
    for(int products_offered_count = 0; products_offered_count < product_count; products_offered_count++ )
    {
        cout << "\t" << product_number[products_offered_count]<<"\t" << product_name[products_offered_count] << "\t\t" << product_price[products_offered_count] << "\t\t\t" << copy_price[products_offered_count] <<endl;
    }
}
void Edit_contact(string &phoneNumber , string newContact , string &eMail , string newEmail)
{
    phoneNumber=newContact;
    eMail=newEmail;
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
    cout << "\t07--- Show offered products" << endl;
    cout << "\t08--- LOG-OUT\n\n" << endl;
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
    for(int SnumR =0; SnumR<customer_kart_count ;SnumR++)
    {
        if(SnumRx == customer_kart_number[SnumR])
        {
            while(SnumR < customer_kart_count)
            {
                customer_kart_number[SnumR]=customer_kart_number[SnumR+1]-1;
                customer_kart_name[SnumR]=customer_kart_name[SnumR+1];
                customer_kart_price[SnumR]=customer_kart_price[SnumR+1];
                customer_kart_count--;
                break;
            } 
        } 
        else
        {
            system("cls");
            setcolor(3);
            page_header();
            gotoxy(57,16);
            setcolor(6);
            cout << "product with this number does not exist!";
            getch();
        }
    }
}



// validity check
bool containsNumber(const string& name) 
{
    for (char character : name) 
    {
        if (isdigit(character)) 
        {
            return true; 
        }
    }
    return false; 
}
bool userExist(string username, int count_SignUp, string Name[])
{
    bool final = false;
    for (int k=0 ; k <= count_SignUp ; k++)
    {
        if(username == Name[k])
        {
            final = true;
            break;
        }
    }
    return final;
}
bool commaExistname(string username )
{
    bool final = false;
    for(int u=0 ; username[u]!='\0' ; u++)
    {
        if(username[u] == ',')
        {
            final = true;
            break;
        }
    }
        return final;
}
bool commaExistpass(string password )
{
    bool final = false;
    for(int u=0 ; password[u]!='\0' ; u++)
    {
        if(password[u] == ',')
        {
            final = true;
            break;
        }
    }
        return final;
}
bool commaExistproduct(string nameP )
{
    bool final = false;
    for(int u=0 ; nameP[u]!='\0' ; u++)
    {
        if(nameP == ",")
        {
            final = true;
            break;
        }
    }
        return final;
}
bool containsNumberP(string price)
{
    bool final = true;
    for(int x=0 ; price[x]!='\0' ; x++)
    {
        if(price[x] != '2'&&price[x] != '3'&&price[x] != '4'&&price[x] != '5'&&price[x] != '1'&&price[x] != '6'&&price[x] != '7'&&price[x] != '8'&&price[x] != '9'&&price[x] != '0')
        {
            final = false;
            break;
        }    
    }
    return final;
}
bool numberExists(int num, int product_number[], int product_count)
{
    bool final = false;
    for(int x=0 ; x < product_count ; x++)
    {
        if(num == product_number[x])
        {
            final = true;
            break;
        }
    }
    return final;
}
bool containsAlp(string num, int product_number[], int product_count)
{
    bool final = false;
    for(int x=0 ; x < product_count ; x++)
    {
        if(num[x] != '2'&&num[x] != '3'&&num[x] != '4'&&num[x] != '5'&&num[x] != '1'&&num[x] != '6'&&num[x] != '7'&&num[x] != '8'&&num[x] != '9'&&num[x] != '0')
        {
            final = true;
            break;
        }
    }
    return final;
}
bool nameExists(string name, string product_name[], int product_count)
{
    bool final = false;
    for(int x=0 ; x < product_count ; x++)
    {
        if(name == product_name[x])
        {
            final = true;
            break;
        }
    }
    return final;
}



// file handling

void save_Users(int count_SignUp, string Name[] , string Password[] , string Role[] )
{
    string data = "";
    fstream file;
    file.open("signUp.txt" , ios::out);
    for(int x = 0 ; x < count_SignUp ; x++)
    { 
        if (x == count_SignUp - 1)
            data +=   to_string(count_SignUp) + "," + Name[x] + "," + Password[x] + "," + Role[x];
        else
            data +=   to_string(count_SignUp) + "," + Name[x] + "," + Password[x] + "," + Role[x] + "\n";
        file << data;
        data = "" ;
    }
    file.close();
}
void load_Users(int &count_SignIn, string Name[] , string Password[] , string Role[] )
{
    string data = "";
    fstream file;
    file.open("signUp.txt" , ios::in);
    if (file.fail())
        return;
    while (!file.eof())
    {
        getline(file, data);
        Name[count_SignIn] = getdata(data , 0);
        Password[count_SignIn] = getdata(data , 1);
        Role[count_SignIn] = getdata(data , 2);
        count_SignIn++;
    }
    
    file.close();
}
string getdata(string data , int comma)
{
    int count = 0;
    string result = "";
    for (int x = 0 ; x < data.length() ; x++)
    {
        if (data[x] == ',')
        {
            count++;
        }
        else if (count == comma)
        {
            result += data[x];
        }
        else if (count > comma)
        {
            break;
        }
    }
    return result;
}

// products file handling

void save_product(int product_number[],string product_name[],int product_price[],int copy_price[],int product_count)
{
    string data = "";
    fstream file;
    file.open("products.txt" , ios::out);
    for(int x = 0 ; x < product_count ; x++)
    { 
        if (x == product_count - 1)
            data += to_string(product_number[x]) + "," + product_name[x] + "," + to_string(product_price[x]) + "," + to_string(copy_price[x]);
        else
            data += to_string(product_number[x]) + "," + product_name[x] + "," + to_string(product_price[x]) + "," + to_string(copy_price[x]) + "\n";
        file << data;
        data = "" ;
    }
    file.close();
}
void load_product(int product_number[],string product_name[],int product_price[],int copy_price[],int &product_count)
{
    string data = "";
    fstream file;
    file.open("products.txt" , ios::in);
    if (file.fail())
        return;
    while (!file.eof())
    {
        getline(file, data);
        product_number[product_count] = strToInt(getdataP(data , 0));
        product_name[product_count] = getdataP(data , 1);
        product_price[product_count] = strToInt(getdataP(data , 2));
        copy_price[product_count] = strToInt (getdataP(data,3));
        product_count++;
    }
    file.close();
}
string getdataP(string data , int comma)
{
    int count = 0;
    string result = "";
    for (int x = 0 ; x < data.length() ; x++)
    {
        if (data[x] == ',')
        {
            count++;
        }
        else if (count == comma)
        {
            result += data[x];
        }
        else if (count > comma)
        {
            break;
        }
    }
    return result;
}

// decors

void seller_header()
{
    setcolor(3);
    cout << "\t\t**      _____        _  _                      **"<<endl;        
    cout << "\t\t**     /  ___|      | || |                     **"<<endl;       
    cout << "\t\t**     \\  --.   ___ | || |  ___  _ __          **"<<endl;         
    cout << "\t\t**       --. \\ / _ \\| || | / _ \\|  __|         **"<<endl;          
    cout << "\t\t**     /\\__/ /|  __/| || ||  __/| |            **"<<endl;          
    cout << "\t\t**     \\____/  \\___||_||_| \\___||_|            **"<<endl;  
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    setcolor(6);
                                          
}

void customer_header()
{
    setcolor(3);
    cout << "\t\t**                        _                                        **"<<endl;                 
    cout << "\t\t**                       | |                                       **"<<endl;          
    cout << "\t\t**       ___  _   _  ___ | |_   ___   _ __ ___    ___  _ __        **"<<endl;          
    cout << "\t\t**      / __|| | | |/ __|| __| / _ \\ |  _   _ \\  / _ \\|  __|       **"<<endl;         
    cout << "\t\t**     | (__ | |_| |\\__ \\| |_ | (_) || | | | | ||  __/| |          **"<<endl;         
    cout << "\t\t**      \\___| \\__,_||___/ \\__| \\___/ |_| |_| |_| \\___||_|          **"<<endl;           
    setcolor(6);                                                 
}

void print_Addproducts()
{
    setcolor(3);
    gotoxy(15,2);
    cout << "  ___       _      _                           _               _        "<<endl;               
    gotoxy(15,3);
    cout << " / _ \\     | |    | |                         | |             | |       "<<endl;                   
    gotoxy(15,4);
    cout << "/ /_\\ \\  __| |  __| |  _ __   _ __   ___    __| | _   _   ___ | |_  ___ "<<endl;                               
    gotoxy(15,5);
    cout << "|  _  | / _` | / _` | | '_ \\ | '__| / _ \\  / _` || | | | / __|| __|/ __|"<<endl;                               
    gotoxy(15,6);
    cout << "| | | || (_| || (_| | | |_) || |   | (_) || (_| || |_| || (__ | |_ \\__ \\"<<endl;                               
    gotoxy(15,7);
    cout << "\\_| |_/ \\__,_| \\__,_| | .__/ |_|    \\___/  \\__,_| \\__,_| \\___| \\__||___/"<<endl;               
    gotoxy(15,8);
    cout << "                      | |                                               "<<endl;                                   
    gotoxy(15,9);
    cout << "                      |_|                                               "<<endl;      
    setcolor(6);                                     
}

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
        setcolor(3);
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
    setcolor(6);
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

string setcolor(unsigned short color)
{
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon, color);
    return "";
}

int strToInt(string s)
{

    int result = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        result = result * 10 + (s[i] - '0');
    }
    return result;
}