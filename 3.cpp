//model a Bank Account, with attributes for 
//account number, account holder's name, and balance. 
//Include methods to deposit and withdraw money.
#include<iostream>
using namespace std;

class Bank
{
    private:
    long acc_no;
    string name;
    int balance=0;

    public:
    void get_details()
    {
        cout<<"Enter your Account No.:";
        cin>>acc_no;

        cout<<"Enter your Name:";
        cin>>name;
    }

    void view_bal()
    {
        cout<<endl<<"Your current balance: "<<balance;
    }

    void deposit()
    {
        int amt;
        cout<<endl<<"Enter the amount to deposit:";
        cin>>amt;

        balance += amt;
        cout<<endl<<"Your updated balance is: "<<balance;
    }

    void withdraw()
    {
        int amt;
        cout<<endl<<"Enter the amount to withdraw:";
        cin>>amt;

        balance -= amt;
        cout<<endl<<"Your updated balance is: "<<balance;
    }
};

int main()
{
    cout<<"YOUR BANK ACCOUNT IS CREATED....."<<endl;

    cout<<"GETTING YOUR DETAILS....."<<endl;
    Bank obj;
    obj.get_details();

    int choice;
    while(1)
    {
    cout<<endl<<"1. VIEW BALANCE \n 2. DEPOSIT \n 3.WITHDRAW \n TYPE 999 TO EXIT"<<endl;
    cin>>choice;
    if(choice==1)
    obj.view_bal();
    else if(choice==2)
    obj.deposit();
    else if(choice==3)
    obj.withdraw();
    else if(choice==999)
    exit(0);
    else
    cout<<"Enter the right choice! Try again"<<endl;
    }

    return 0;
}