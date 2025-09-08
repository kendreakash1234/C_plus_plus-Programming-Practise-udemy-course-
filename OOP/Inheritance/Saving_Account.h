#ifndef _SAVING_ACCOUNT_H_
#define _SAVING_ACCOUNT_H_
#include "Account.h"
class Saving_Account : public Account{
    
    public:
    Saving_Account();
    Saving_Account(double number);
    ~Saving_Account();
    double total_Balance_after_interest(int rate, int tenure);
};

#endif