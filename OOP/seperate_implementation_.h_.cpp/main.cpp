#include <iostream>
#include "Account.h"
using namespace std;


int main()
{
    Account akash;
    akash.set_balance(10000);
    double bal = akash.get_balance();
    
    cout<<"Akash having balance of "<<bal<<endl;
    
    return 0;
}



