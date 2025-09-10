#include <iostream>
using namespace std;

class Person{
    friend ostream &operator<<(ostream &os, const Person &obj);
    string name;
    int age;
    
    public:
    Person(string n, int g):name{n},age{g}{}
};


ostream &operator<<(ostream &os,const Person &obj){
    os<<obj.name<<" "<<obj.age;;
    return os;
}

int main()
{
    Person p{"akash", 5};
    cout<<p;
    
    return 0;
}