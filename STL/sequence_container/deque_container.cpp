#include <iostream>
#include <deque>
#include<vector>
#include <algorithm>
using namespace std;

class Person{
    string name;
    int age;
    public:
    Person():name{""},age{0}{
        cout<<"Constructor"<<endl;
    }
    Person(string l, int a):name{l},age{a}{
        cout<<"Overload Constructor"<<endl;
    }
    ~Person(){
        cout<<"Destructor"<<endl;
    }
    string get_name() const{
        return name;
    }
    int get_age() const{
        return age;
    }
};

int main()
{
    
    deque<int> d{1,2,3,4,5};
    for_each(d.begin(),d.end(),[](int x){cout<<x<<" ";});
    cout<<"\nsize of deque "<<d.size()<<endl;
    cout<<"max size of deque "<<d.max_size()<<endl;
    cout<<"first of deque "<<d.front()<<endl;
    cout<<"back  of deque "<<d.back()<<endl;
    cout<<"d.at(0) "<<d.at(0)<<endl;
    cout<<" d[1] "<<d[1]<<endl;
    
    d.push_back(4);
    d.push_back(1);
    d.push_front(4);
    d.push_front(8);
    for_each(d.begin(),d.end(),[](int x){cout<<x<<" ";});
    cout<<endl;
    d.pop_back();
    d.pop_front();
    for_each(d.begin(),d.end(),[](int x){cout<<x<<" ";});
    cout<<endl;
    
    vector<int> v{7,6,5,4,3};
    for(const auto &s : v){
        d.push_back(s);
    }
    for_each(d.begin(),d.end(),[](int x){cout<<x<<" ";});
    cout<<endl;
    Person p{"akash",1};
    deque<Person> q;
    q.push_back(p);
    q.push_back(Person{"akash",2});
    q.push_front(Person{"akash",3});
    
    for(const auto c : q)
        cout<<c.get_name()<<" "<<c.get_age()<<endl;;
    
   return 0;
}