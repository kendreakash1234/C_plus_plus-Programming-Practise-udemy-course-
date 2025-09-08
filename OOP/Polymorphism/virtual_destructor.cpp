#include <iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"Base C"<<endl;
    }
    virtual ~Base(){
        cout<<"Base D"<<endl;
    }
};
class Derived : public Base{
    public:
    Derived(){
        cout<<"Derived C"<<endl;
    }
    virtual ~Derived(){//virtual is optional in derived class destructor
        cout<<"Derived D"<<endl;
    }
};

int main()
{
    Base b;
    Derived day;
    
    Base *p = new Derived();
    delete p;
    
    return 0;
}