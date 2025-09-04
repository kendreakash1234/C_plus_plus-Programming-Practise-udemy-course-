#include <iostream>
using namespace std;

class Account{
    double balance;
    
    public:
    Account();
    ~Account();
    void set_balance(int bal);
    double get_balance();
};