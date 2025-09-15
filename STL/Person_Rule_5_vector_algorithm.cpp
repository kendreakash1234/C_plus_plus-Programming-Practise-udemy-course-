#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Person{
    friend ostream &operator<<(ostream &os, const Person &obj);
    int *ptr;
    public:
    Person(int data = 0):ptr{new int(data)}{
        cout<<"Constructor"<<endl;
    }
    Person(const Person &obj):ptr{new int(*obj.ptr)}{
        cout<<"Copy constructor"<<endl;
    }
    Person& operator=(const Person &obj){
        cout<<"Copy assignment"<<endl;
        if(this==&obj)
            return *this;
        delete ptr;
        ptr = new int(*obj.ptr);
        return *this;
    }
    Person(Person &&obj){
        cout<<"Move constructor"<<endl;
        ptr = obj.ptr;
        obj.ptr = nullptr;
    }
    Person& operator=(Person &&obj){
        cout<<"Move assignment"<<endl;
        if(this==&obj)
            return *this;
        delete ptr;
        ptr = obj.ptr;
        obj.ptr = nullptr;
        
        return *this;
    }
    int get_ptr(){
        return *ptr;
    }
    bool operator==(const Person &obj2){
        return (*(this->ptr)==*(obj2.ptr));
    }
    ~Person(){
        delete ptr;
        cout<<"Destructor"<<endl;
    }
    bool operator<(const Person &rhs){
        return (*(this->ptr) < *(rhs.ptr));
    }

};

ostream &operator<<(ostream &os, const Person &obj){
    os<<*(obj.ptr)<<" ";
    return os;
}

int main()
{
    cout<<"/////////////Constructor////////////"<<endl;
    Person p;
    Person p1(1);
    Person p2 = 2;
    Person p3(3);
    cout<<"/////////////Copy constructor////////"<<endl;
    Person p4(p2);
    Person p5{p2};
    Person p6 = p2;
    cout<<"/////////////Copy assignment constructor////////"<<endl;
    Person p8;
    p8 = p6;
    cout<<"/////////////////////Move constructor///////////////"<<endl;
    Person p9 = move(Person{9});
    cout<<"/////////////////////Move assignment///////////////"<<endl;
    Person p7;
    p7 = Person{4};
    
    vector<Person> vec;
    vec.push_back(p);
    vec.push_back(p1);
    vec.push_back(p2);
    vec.push_back(p3);
    vec.push_back(p4);
    vec.push_back(p5);
    vec.push_back(p6);
    vec.push_back(p7);
    vec.push_back(p8);
    vec.push_back(p9);

    for(auto &x : vec){
        cout<<x.get_ptr()<<" ";
    }
    cout<<endl;
    
    auto lock = find(vec.begin(), vec.end(),p9);
    if(lock!=vec.end())
        cout<<*lock<<" found"<<endl;
    else
        cout<<"not found"<<endl;
    
    auto l = max_element(vec.begin(),vec.end());
    if(l!=vec.end())
        cout<<"max element "<<*l<<endl;
        
    auto l2 = min_element(vec.begin(),vec.end());
    if(l2!=vec.end())
        cout<<"Minimum element "<<*l2<<endl;

    
    return 0;
}