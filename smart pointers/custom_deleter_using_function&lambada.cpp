#include <iostream>
#include <memory>
using namespace std;
class B;

class A{
    int data;
    public:
    A(){
        cout<<"A Constructor "<<data<<endl;
    }
    A(int num):data{num}{
        cout<<"A Constructor "<<data<<endl;
    }
    ~A(){
        cout<<"A Desstructor "<<data<<endl;
    }
};

void my_delete_later(A *a){
    cout<<"deleting pointer"<<endl;
    delete a;
}

int main()
{
    cout<<"Using function"<<endl;
    shared_ptr<A> p{new A{10}, my_delete_later};
   
   shared_ptr<A> b(new A{20}, 
   [](A *a){cout<<"deleting using lambada"<<endl; delete a;});
   
    return 0;
}