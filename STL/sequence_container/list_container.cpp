#include <iostream>
#include<vector>
#include<algorithm>
#include <list>
#include <forward_list>
using namespace std;

class Person{
    friend ostream &operator<<(ostream &os, const Person &obj);
    string name;
    int age;
    public:
    Person(string lname ="None", int lage = 0)
        :name{lname}, age{lage}{
            
        }
    ~Person(){
        cout<<"Destructor"<<endl;
    }
    bool operator==(const Person &obj){
        return (this->name == obj.name && this->age == obj.age);
    }
    string get_name() const{
        return name;
    }
    int get_age() const{
        return age;
    }
    
};
ostream &operator<<(ostream &os, const Person &obj){
    os<<obj.name<<" "<<obj.age<<endl;
    return os;
}

template <typename T>
void display(list<T> &l){
    for(const auto &a : l){
        cout<<a<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> l{1,2,3,4,5,6};
    cout<<"size of list "<<l.size()<<endl;
    cout<<"max size of list "<<l.max_size()<<endl;
    cout<<"Front of list "<<l.front()<<endl;
    cout<<"Back of list "<<l.back()<<endl;
    
    display(l);
    l.push_back(7);
    l.push_back(9);
    l.push_front(0);
    cout<<"\nAfter push operations"<<endl;
    display(l);
    l.pop_back();
    l.pop_front();
    
    cout<<"\nAfter pop operations"<<endl;
    display(l);
    auto it = find(l.begin(), l.end(),5);
    if(it!=l.end())cout<<"Item is found "<<*it<<endl;
    it++;
    it++;
    cout<<"Item is found "<<*it<<endl;
    it--;
    cout<<"Item is found "<<*it<<endl;
    l.insert(it,100);
    it++;
    l.erase(it);
    display(l);
   
    l.resize(2);
    l.resize(5);
    cout<<"\nAfter resize operations"<<endl;
    display(l);
    
    Person p{"Akash",1};
    
    list<Person> lp;
    lp.push_front(p);
    lp.push_back(Person{"kendre",2});
    lp.emplace_front("aa",3);
    lp.emplace_back("bb",4);
    lp.resize(5);
    display(lp);
    
    return 0;
}



