#include <iostream>
using namespace std;

class Base{
    int *ptr;
    public:
    Base(){
        ptr = nullptr;
        cout<<"Default Base Constructor"<<endl;
    }
    Base(int num){
        ptr = new int(num);
        cout<<"Overload Base Constructor"<<endl;
    }
    Base(const Base &obj){
        cout<<"Copy Constructor"<<endl;
        ptr = new int(*(obj.ptr));
    }
    Base(Base &&obj){
        cout<<"Move Constructor"<<endl;
        ptr = new int(*(obj.ptr));
        obj.ptr = nullptr;
    }
    
    Base &operator=(Base &&obj){
        cout<<"Move Assignment"<<endl;
        if(this==&obj)
            return *this;
        delete ptr;
        ptr = new int(*(obj.ptr));
        obj.ptr = nullptr;
        return *this;
    }
    
    Base &operator=(const Base &obj){
        cout<<"copy assignment operator"<<endl;
        if(this==&obj)
            return *this;
        delete ptr;
        ptr = new int(*(obj.ptr));
        return *this;
        
    }
    void display(){
        cout<<"Value "<<*ptr<<endl;
    }
    ~Base(){
        if(ptr == nullptr)  
            cout<<"Base Destructor nullptr"<<endl;
        else
            cout<<"Base Destructor "<<*ptr<<endl;      
    }
};

class Derived : public Base{
    public:
    Derived():Base{}{
        cout<<"Default Derived Constructor"<<endl;
    }
    Derived(int num):Base{num*2}{
        cout<<"Overload Derived Constructor"<<endl;
    }
    ~Derived(){
        cout<<"Derived Destructor"<<endl;
    }
};

int main()
{
    Base b;
    Base b0=5;
    Base b1(2);
    Base b3{b1};
    b3.display();
    Base b4 =  b3;
    b4.display();
    Base b5;
    b5 = b4;
    b5.display();
    Base b6 = move(Base{4});
    Base b7;
    b7 = Base{9};
    Derived d;
    Derived d1(4);
    return 0;
}