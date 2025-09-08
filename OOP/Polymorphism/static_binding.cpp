#include <iostream>
using namespace std;

class Base{
    public:
    Base(){
    }
    void display(){
        cout<<"Display Base"<<endl;
    }
};

class Derived : public Base{
    public:
    Derived(){
        
    }
    void display(){
        cout<<"Display Derived"<<endl;
    }
};

int main()
{
    Base b;
    b.display();
    
    Derived d;
    d.display();
    
    Base *p = new Derived();
    p->display();
    
    return 0;
}