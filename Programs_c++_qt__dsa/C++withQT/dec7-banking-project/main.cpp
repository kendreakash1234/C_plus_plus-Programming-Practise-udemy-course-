#include <iostream>

using namespace std;

class Account
{
private:
    string firstName;
    string lastName;
    int balance;
public:
    static int accountNumber;
    Account(string f,string l,int b)
    {
       accountNumber++;
       firstName=f;
       lastName=l;
       balance=b;
    }

    string getFirstName()
    {
        return firstName;
    }
    string getLastName()
    {
        return lastName;
    }
    int getBalance()
    {
        return balance;
    }
    int getAccountNumber()
    {
        return accountNumber;
    }

    void balanceEnquiry()
    {
        cout<<"Balance in your account is "<<balance;
    }

    void deposit(int amount)
    {
        balance=balance+amount;
    }

    void withdraw(int amount)
    {
        balance=balance-amount;
    }

};

class Bank
{
public:
    Bank();

};

int Account::accountNumber=0;

int main()
{
    Account("Akash","kendre",35000);
    int choice;
    cout<<"select one option below\n1->open an account\n2->Balance enquiry\n3->Deposit\n4->Withdrawl\n5->close an account\n6->show all accounts\n7->quit"<<endl;
    do
    {
        cin>>choice;
        int amount;

        switch(choice)
        {
        case 1:
//            b.createAccount();
            break;
        case 2:
            b.balanceEnquiry();
            break;
        case 3:
            cout<<"Enter the amount you want to deposit"<<endl;
            cin>>amount;
            b.deposit(amount);
            break;
        case 4:
            cout<<"Enter the amount you want to withdraw"<<endl;
            cin>>amount;
            b.withdraw(amount);
            break;
        case 5:
//            b.close();
            break;
        case 6:
            break;
        case 7:
            break;
            break;
        default:
            cout<<"Enter valid choice"<<endl;
        }
    }while(choice!=7);
    return 0;
}

