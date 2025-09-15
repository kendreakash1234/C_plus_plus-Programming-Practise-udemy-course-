#include <iostream>
#include <memory>
using namespace std;

class Base{

    int *age;
    public:
    Base(int a = 0);
    Base(Base &obj);
    void display();
    ~Base();
};

Base::Base(int a){//constructor
    cout<<"parameterized constructor"<<endl;
    age = new int(a);
}

Base::Base(Base &source){//shallow copy
    age = source.age;
}
    
void Base::display(){//display method
    cout<<"Akash is "<<*age<<" years old"<<endl;
}
    
Base::~Base(){//destructor
    cout<<"Destructro called"<<endl;
    delete age;
}

int main()
{
    Base b(6);
    
    Base g(b);
    //double free detected
    
    return 0;
}