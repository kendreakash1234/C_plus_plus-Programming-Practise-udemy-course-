#include "Account.h"

Account::Account(){
    cout<<"Account Constructor"<<endl;
    balance = 0;
}
Account::Account(double lbalance):balance{lbalance}{
    cout<<"Account overload Constructor"<<endl;
}
Account::~Account(){
    cout<<"Account Destructor"<<endl;
}

void Account::deposit(double amount){
    cout<<"deposit amount is "<<amount;
    balance +=amount;
}

void Account::withdraw(double amount){
    cout<<"withdraw amount is "<<amount;
    balance -=amount;
}

double Account::get_balance(){
    return balance;
}