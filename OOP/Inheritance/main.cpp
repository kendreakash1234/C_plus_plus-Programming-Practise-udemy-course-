#include <iostream>
using namespace std;
#include "Saving_Account.h"

int main()
{
    cout<<"------------Account-------------"<<endl;
    Account a(34);
    a.deposit(1234);
    a.withdraw(32);
    
    cout<<"------------Saving Account-------------"<<endl;
    Saving_Account s;
    s.deposit(1234);
    cout<<"Account balance is "<<s.get_balance()<<endl;;
    s.withdraw(1111);
    cout<<"Account balance is "<<s.get_balance()<<endl;;
    
    cout<<"Total balance after interest "<<s.total_Balance_after_interest(3,6);
    cout<<endl;
    
    Saving_Account s1(8765.3);
    cout<<"Account balance is "<<s1.get_balance()<<endl;
    
    cout<<"Using pointer"<<endl;
    Saving_Account *sa = new Saving_Account(43245);
    cout<<"Balance is "<<sa->get_balance()<<endl;
    delete sa;
    
    return 0;
}