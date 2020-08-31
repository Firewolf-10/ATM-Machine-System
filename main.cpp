#include <iostream>

using namespace std;

int main()
{
    int pin=4040,ch,balance=0,deposite,withdraw;

    do
    {
    cout<<"*****************************************************\n";
    cout<<"*****************************************************\n";
    cout<<"****************WELCOME TO MY BANK*******************\n";
    cout<<"*****************************************************\n";
    cout<<"*****************************************************\n";
    cout<<"\nPlease enter your pin number:\n";
    cin>>pin;
    if(pin==4040)
    {
    while(ch!=4)
    {
    cout<<"\n\n********************MENU********************\n" << endl;
    cout<<"                    1.DEPOSITE \n";
    cout<<"                    2.WITHDRAW \n";
    cout<<"                    3.BALANCE ENQUIRY \n";
    cout<<"                    4.EXIT \n\n\n";
    cout<<"********************************************** \n";
    cout<<"\nEnter your choice: \n";
    cin>>ch;

    if(ch>4)
    {
                    cout<<"\n\n                      Invalid choice!               ";
                    cout<<"\n                  Enter valid choice from 1-4         ";
    }
    else
    {
    switch (ch)
    {
        case 1:cout<<"Enter amount you want to deposite:\n";
               cin>>deposite;
                  balance+=deposite;
               cout<<"Your account balance is:"<<balance;
                 break;
        case 2:cout<<"Enter amount to be withdraw:";
               cin>>withdraw;
               if(balance<withdraw)
               {
                    cout<<"Insuufficient Balance!!!!!\n";
                    cout<<"please enter amount less than or equal to your balance amount.\n";
               }
                    else
                    {
                        balance-=withdraw;
                        cout<<"Your account balance is:"<<balance;
                        break;
                    }
        case 3: cout<<"Your account balance is:"<<balance;
                 break;
        case 4:break;
    }
    }
    }
    }
    else
    {
        cout<<"\n                                     !!!! Wrong pin number !!!!";
        cout<<"\n            *******************    PLESE ENTER THE CORRECT PIN     ****************\n\n";
    }
    }while(ch!=4);
    return 0;
}
