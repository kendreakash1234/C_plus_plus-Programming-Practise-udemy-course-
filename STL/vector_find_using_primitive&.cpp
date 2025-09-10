#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

class Person{
    friend bool operator==(const Person &p1,const Person &p2);
    string name;
    int age;
    
    public:
    Person(string a, int s):name{a}, age{s}{
        cout<<name<<" is "<<age<<" years old"<<endl;
    }
    
    string get_name() const{
        return name;
    }
    
    int get_age() const{
        return age;
    }
    
};

bool operator==(const Person &p1,const Person &p2){
    return (p1.get_name() == p2.get_name() && p1.get_age() == p2.get_age());
}

int main()
{
    vector<int> v{1,2,3,4,5};
    
    auto loc = std::find(v.begin(), v.end(), 7);
    if(loc!=v.end())
        cout<<*loc<<endl;
    cout<<*loc<<endl;
    
    vector<Person> vec;
    Person p{"a",2};
    Person p1{"kendre",8};
    vec.push_back(p);
    // vec.push_back(p1);

    auto lock = find(vec.begin(), vec.end(), p1);
    if(lock!=vec.end())
        cout<<"Person found "<<lock->get_name()<<endl;
    else
        cout<<"Person not found "<<endl;
    
    
    return 0;
}