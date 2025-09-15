#include "Saving_Account.h"

Saving_Account::Saving_Account(){
    cout<<"Saving_Account Constructor"<<endl;
}

Saving_Account::Saving_Account(double number):Account{number}{
    cout<<"Saving_Account Overload Constructor"<<endl;
}

Saving_Account::~Saving_Account(){
    cout<<"Saving_Account Destructor"<<endl;
}

double Saving_Account::total_Balance_after_interest(int rate, int tenure){
    return get_balance()+(get_balance()*rate*tenure)/100;
}