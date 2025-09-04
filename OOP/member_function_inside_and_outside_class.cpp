#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Account
{
    private:
    double balance;
    double rate;
    
    public:
    
    void set_balance(int bal){
        balance = bal;
    }
    
    double get_balance(){
        return balance;
    }
    
    void set_rate(int bal);
    double get_rate();
};

void Account :: set_rate(int bal){
    rate = bal;
}
    
double Account :: get_rate(){
    return rate;
}


int main()
{
    Account akash;
    akash.set_balance(100000);
    double bal = akash.get_balance();
    
    cout<<"Akash account balance is "<<bal<<endl;

    akash.set_rate(7);
    double rate = akash.get_rate();
    
    cout<<"Akash account rate is "<<rate<<" percent"<<endl;

    return 0;
}



