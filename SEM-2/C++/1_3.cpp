#include <iostream>
#include<stdlib.h>
using namespace std;

class bank
{
    string name;
    int accno;
    float balance;
public:
    void inp(string,int,float);
    void deposit(int);
    void withdraw(int);
    void display();
};

void bank::inp(string n,int no,float bal)
{
    name=n;
    accno=no;
    balance=bal;
}
void bank::deposit(int x)
{
    balance+=x;
    cout<<"Amount deposited successfully"<<endl;
}
void bank::withdraw(int x)
{
    if(balance>x && (balance-x)>500)
    {
        balance-=x;
        cout<<"Withdrawal successful"<<endl;
    }
    else
        cout<<"Insufficient Balance"<<endl;
}
void bank::display()
{
    cout<<endl<<"Name of the depositer: "<<name<<endl;
    cout<<"Account number: "<<accno<<endl;
    cout<<"Balance: "<<balance<<endl;
}
int main()
{
    int choice,no,x;
    string n;
    float bal;
    bank b;
    while(1)
    {
        cout<<endl<<"1.To assign values"<<endl<<"2.Deposit amount"<<endl<<"3.Withdraw amount"<<endl<<"4.Display details"<<endl<<"5.Exit"<<endl<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<endl<<"Enter the depositer name: ";
                    cin>>n;
                    cout<<"Enter the account number: ";
                    cin>>no;
                    cout<<"Enter the balance : ";
                    cin>>bal;
                    b.inp(n,no,bal);
                    break;
            case 2: cout<<"Enter the amount to be deposited: ";
                    cin>>x;
                    b.deposit(x);
                    break;
            case 3: cout<<"Enter the amount to be withdrawed: ";
                    cin>>x;
                    b.withdraw(x);
                    break;
            case 4: cout<<"Details of the account: ";
                    b.display();
                    break;
            case 5: exit(0);
            default: cout<<"Invalid choice. "<<endl;
        }
    }
    return 0;
}
