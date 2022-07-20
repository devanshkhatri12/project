#include<iostream>
using namespace std;

int main()
{
    int quant =0;
    int choice =0;

    // Quantity
    int qrooms=0 , qpasta =0 , qnoodles =0 , qshake =0 , qchicken =0;
    // food item sold
    int Srooms=0 , Spasta =0 , Snoodles =0 , Sshake =0 , Schicken =0;

    // total price of items
    int Total_rooms=0 , Total_pasta =0 , Total_noodles =0 , Total_shake =0 , Total_chicken =0;
    

    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms available: ";
    cin>>qrooms;
    cout<<"\n  quantity of pasta:";
    cin>>qpasta;
    cout<<"\n  quantity of noodles: ";
    cin>>qnoodles;
    cout<<"\n quantity of shake: ";
    cin>>qshake;
    cout<<"\n quantity of chicken_roll: ";
    cin>>qchicken;

    m:
    cout<<"\n\t\t please select from the menu options ";
    cout<<"\n\n1) rooms ";
    cout<<"\n2) pasta ";
    cout<<"\n3) noodles ";
    cout<<"\n4) shake ";
    cout<<"\n5) chicken ";
    // detailed and information regarding sales
    cout<<"\n6) Information regarding sales and collection  ";
    cout<<"\n7) Exit ";

    cout<<"\n\n please Enter  your choice! ";
    cin>>choice;

    switch(choice)
    {
        case 1: 
        cout<<"\n\n Enter the number of rooms you want: ";
        cin>>quant;      /* quantity of rooms that user want */
        if(qrooms-Srooms >= quant)    /*hmare pass itne room h ki nhi check krege*/
        {
            Srooms = Srooms + quant;
            Total_rooms = Total_rooms + (quant * 1200);
            cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you!";
        }
        else
        {
            cout<<"\n\t only "<<qrooms-Srooms<<" Rooms remaining in hotel";
            
        }
        break;


        case 2: 
        cout<<"\n\n Enter pasta quantity you want: ";
        cin>>quant;      /* quantity of rooms that user want */
        if(qpasta-Spasta >= quant)    /*hmare pass itne room h ki nhi check krege*/
        {
            Spasta = Spasta + quant;
            Total_pasta = Total_pasta + (quant * 240);
            cout<<"\n\n\t\t"<<quant<<"pasta is being ordered by you";
        }
        else
        {
            cout<<"\n\t only "<<qpasta-Spasta<<" pasta remaining in hotel";
            
        }
        break;


        case 3: 
        cout<<"\n\n Enter noodles quantity you want: ";
        cin>>quant;      /* quantity of noodles that user want */
        if(qnoodles-Snoodles >= quant)    /*hmare pass itne pasta h ki nhi check krege*/
        {
            Snoodles = Snoodles + quant;
            Total_noodles = Total_noodles + (quant * 200);
            cout<<"\n\n\t\t"<<quant<<"noodles is being ordered by you";
        }
        else
        {
            cout<<"\n\t only "<<qnoodles-Snoodles <<" noodles remaining in hotel";
            
        }
        break;


        case 4: 
        cout<<"\n\n Enter shake quantity you want: ";
        cin>>quant;      /* quantity of shake that user want */
        if(qshake-Sshake >= quant)    /*hmare pass itne shake h ki nhi check krege*/
        {
            Sshake = Sshake + quant;
            Total_shake = Total_shake+ (quant * 130);
            cout<<"\n\n\t\t"<<quant<<"shake is being ordered by you";
        }
        else
        {
            cout<<"\n\t only "<<qshake-Sshake<<" shake remaining in hotel";
            
        }
        break; 


        case 5: 
        cout<<"\n\n Enter chicken quantity you want: ";
        cin>>quant;      /* quantity of chicken roll that user want */
        if(qchicken-Schicken >= quant)    /*hmare pass itne chicken roll h ki nhi check krege*/
        {
            Schicken = Schicken + quant;
            Total_chicken= Total_chicken + (quant * 290);
            cout<<"\n\n\t\t"<<quant<<"chicken is being ordered by you";
        }
        else
        {
            cout<<"\n\t only "<<qchicken-Schicken <<"chicken_roll remaining in hotel";
            
        }
        break;

        case 6:  
        cout<<"detailes of sales and collection";

        cout<<"\n\t Number of rooms we had: "<<qrooms;
        cout<<"\n\t Number of rooms we gave for rent "<<Srooms;
        cout<<"\n\t Remaining rooms : "<<qrooms-Srooms;
        cout<<"\n\t Total rooms collection of the day: "<<Total_rooms;

        cout<<"\n\t Number of pasta we had: "<<qpasta;
        cout<<"\n\t Number of pasta we gave to customer "<<Spasta;
        cout<<"\n\t Remaining pasta : "<<qpasta-Spasta;
        cout<<"\n\t Total pastas collection of the day: "<<Total_pasta;

        cout<<"\n\t Number of noodles we had: "<<qnoodles;
        cout<<"\n\t Number of noodles we gave to customer "<<Snoodles;
        cout<<"\n\t Remaining noodles : "<<qnoodles-Snoodles;
        cout<<"\n\t Total noodles collection of the day: "<<Total_noodles;
        
        cout<<"\n\t Number of shake we had: "<<qshake;
        cout<<"\n\t Number of shake we gave to customer "<<Sshake;
        cout<<"\n\t Remaining shake : "<<qshake-Sshake;
        cout<<"\n\t Total shake collection of the day: "<<Total_shake;

        cout<<"\n\t Number of chicken_roll we had: "<<qchicken;
        cout<<"\n\t Number of chicken_roll we gave to customer "<<Schicken;
        cout<<"\n\t Remaining chicken_roll : "<<qchicken-Schicken;
        cout<<"\n\t Total chicken_roll collection of the day: "<<Total_chicken;
        break;

        case 7: exit(0);

        default: cout<<"\n please select the number mentioned above! ";
    }
    goto m;
}