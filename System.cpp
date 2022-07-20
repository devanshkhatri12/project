#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;


void login();
void registration();
void forgot();
int main()
{
    int c; /*choice*/
    cout<<"\t\t\t______________________________________\n\n\n";
    cout<<"\t\t\t            Welcome to make the login page          \n\n\n";
    cout<<"\t\t\t_________________      Menu     ________________\n\n";
    cout<<"                                                     \n\n";
    cout<<"\t|  press 1 to LOGIN                                   |"<<endl;
    cout<<"\t|  press 2 to REGISTRATION                            |"<<endl;
    cout<<"\t|  press 3 if you forgot your PASSWORD                |"<<endl;
    cout<<"\t|  press 4 to EXIT                                    |"<<endl;


    cout<<"\n\t\t\t please enter your choice: ";
    cin>>c;
    cout<<endl;
    
    switch(c)
    {
        case 1:
                login();
                break;

        case 2:
                registration();
                break;

        case 3: 
                forgot();
                break;

        case 4:
                cout<<"\t\t\t Thankyou \n\n";
                break;
        
        default:
                system("cls");
                cout<<"\t\t\t Please select from the options given above \n"<<endl;
                main();
    }
}

void login()
{
    int count;
    string userID ,password ,Id , pass;
    system("cls");
    cout<<"\t\t\t please enter the username and password: "<<endl;
    cout<<"\t\t\t USERNAME: ";
    cin>>userID;
    cout<<"\t\t\t PASSWORD: ";
    cin>>password;

    ifstream input("record.txt");       /*using filehandling operation of ifstream class it is used to read the data*/
    
    while(input>>Id>>pass)
    {
        if(Id== userID && pass==password)
        {
            count =1;
            system("cls");
        }
    }
    input.close();

    if(count==1)
    {
        cout<<userID<<"Your LOGIN is successfull \n  Thanks for logging in ! \n";
        main();
    }
    else
    {
        cout<<"\n LOGIN ERROR  \n Please check your user name";
        main();
    }

}

void registration()
{
    string ruserID , rpassword  ,rID, rpass;
    system("cls");
    cout<<"\t\t\t Enter the USERNAME: ";
    cin>>ruserID;
    cout<<"\t\t\t Enter the password: ";
    cin>>rpassword;

    ofstream f1("record.txt", ios::app);
    f1<<ruserID<<' '<<rpassword<<endl;
    system("cls");
    cout<<"\n\t\t\t Registration is successfull ! \n";
    main();
}

void forgot()
{
    int option;
    system("cls");
    cout<<"\t\t\t you forgot the password ? No worries \n";
    cout<<"press 1 to search your ID by username "<<endl;
    cout<<"press 2  To go back to the main menu"<<endl;
    cout<<"\t\t\t Enter your choice :";
    cin>>option;

    switch(option)
    {
        case 1:
            {
                int count =0;
                string suserID, sID , spass;
                cout<<"\n\t\t\t Enter the username which you remembered: ";
                cin>>suserID;

                ifstream f2("record.txt");
                while(f2>>sID>>spass)
                {
                    if(sID==suserID)
                    {
                        count =1;
                    }
                }
                f2.close();

                if(count==1)
                {
                    cout<<"\n\n Your account is found ! \n";
                    cout<<"\n\n Your password is : "<<spass;
                    main();
                }
                else
                {
                    cout<<"\n\t Sorry! your account is not found! \n";
                    main();
                }
                break;
            }
        case 2:
            {
                main();
                break;
            }
        default:
            cout<<"\n\t sorry!  your account is not found! \n";
            forgot();
    }
}2 