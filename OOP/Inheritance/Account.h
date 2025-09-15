#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
using namespace std;
class Account{
    double balance;
    public:
    void deposit(double amount);
    void withdraw(double amount);
    double get_balance();
    Account();
    Account(double lbalance);
    ~Account();
};

#endif 