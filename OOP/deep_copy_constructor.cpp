#include <iostream>
using namespace std;

class Deep{
    int *data;
    public:
    Deep(int d);
    Deep(const Deep &source);
    int get_value();
    ~Deep();
};

Deep::Deep(int d){
    cout<<"parameterized constructor"<<endl;
    data = new int;
    *data = d;
}
Deep::Deep(const Deep &source):Deep{*source.data}{
    cout<<"Deep copy"<<endl;
}

Deep::~Deep(){
    cout<<"Destructor"<<endl;
    delete data;
}

int Deep::get_value(){
    return *data;
}

void display(Deep s){
    cout<<"Data "<<s.get_value()<<endl;
}

int main()
{
    Deep d(5);
    cout<<endl;
    display(d);
    
    Deep f{d};
    cout<<f.get_value()<<endl;
    
    return 0;
}