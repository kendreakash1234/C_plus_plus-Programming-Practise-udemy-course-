#include <iostream>
#include <memory>
using namespace std;
class B;

class A{
    shared_ptr<B> b;
    public:
    void set(shared_ptr<B> &obj){
        b = obj;
    }
    A(){
        cout<<"A Constructor"<<endl;
    }
    ~A(){
        cout<<"A Desstructor"<<endl;
    }
};

class B{
    // shared_ptr<A> a;//circular reference no destructor called
    weak_ptr<A> a;
    public:
    void set(shared_ptr<A> &obj){
        a = obj;
    }
    B(){
        cout<<"B Constructor"<<endl;
    }
    ~B(){
        cout<<"B Desstructor"<<endl;
    }
};
int main()
{
    shared_ptr<A> p = make_shared<A>();
    shared_ptr<B> q = make_shared<B>();
    
    p->set(q);
    q->set(p);
    
    return 0;
}