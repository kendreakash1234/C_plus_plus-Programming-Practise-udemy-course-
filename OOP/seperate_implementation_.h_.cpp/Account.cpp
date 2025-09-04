#include "Account.h"

Account::Account(){
    cout<<"Object Created"<<endl;
}
Account::~Account(){
    cout<<"Object Destroyed"<<endl;
}
void Account::set_balance(int bal){
    balance = bal;
}

double Account::get_balance(){
    return balance;
}