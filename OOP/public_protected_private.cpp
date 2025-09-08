#include <iostream>
using namespace std;

class Base{
    private:
    int private_member;
    public:
    int public_member;
    protected:
    int protected_member;
};

class Derived1 : public Base{
    public:
    void acc_base_numbers(){
        public_member=3;
        protected_member=6;
        // private_member=1;//not accessible becoz private
    }
};

class Derived2 : protected Base{
    public:
    void acc_base_numbers(){
        public_member=3;//becomes protected in this class
        protected_member=6;//becomes protected in this class
        // private_member=1;//not accessible becoz private
    }
};

class Derived3 : private Base{
    public:
    void acc_base_numbers(){
        public_member=3;//becomes private in this class
        protected_member=6;//becomes private in this class
        // private_member=1;//not accessible becoz private
    }
};

int main()
{
    Derived1 a;
    a.public_member = 2;
    // a.protected_member = 1;//not accesible byobject only child class
    // a.private_member = 3;//private members not accessible
        
    Derived2 b;
    // b.public_member = 2;//becomes protected not accesible byobject only child class
    // b.protected_member = 1;//becomes protected not accesible byobject only child cl
    // b.private_member = 3;//private members not accessible
    
    Derived3 c;
    //all members becomes private and non accessible
    
    
    return 0;
}