#include <iostream>
using namespace std;
class Account{
    
    public:
    Account(){
        cout<<"Account Cosntructor"<<endl;
    }
    virtual ~Account(){
        cout<<"Account Destructor"<<endl;
    }
    virtual void display() const{
        cout<<"Account display method"<<endl;
    }
};

class Saving_Account : public Account{
    public:
    Saving_Account(){
        cout<<"Saving_Account Cosntructor"<<endl;
    }
    virtual ~Saving_Account(){
        cout<<"Saving_Account Destructor"<<endl;
    }
    virtual void display() const override{
        cout<<"Saving_Account display method"<<endl;
    }
};

class Trust_Account : public Account{
    public:
    void display() const;
    Trust_Account(){
        cout<<"Trust_Account Cosntructor"<<endl;
    }
    virtual ~Trust_Account(){
        cout<<"Trust_Account Destructor"<<endl;
    }
    
};

void Trust_Account :: display() const{
        cout<<"Trust_Account display method"<<endl;
}
    
class Pcd{
    public:
    virtual void display();
};

int main()
{
    Account a;
    Account &ref = a;
    ref.display();
    cout<<endl;
    Saving_Account s;
    Saving_Account &ref1 = s;
    ref1.display();
    
    cout<<"\n Using reference"<<endl;
    Account &ref3 = s;
    ref3.display();
    
    
    return 0;
}