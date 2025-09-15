#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Person{
    string name;
    int age;
    public:
    Person():name{""},age{0}{
        
    }
    Person(string lname, int lage):name{lname},age{lage}{
        
    }
    
    bool operator==(const Person &obj2){
        return (this->name == obj2.name && this->age==obj2.age);
    }
};

int main()
{
    vector<int> v1{6,9,4,1,9,6,3};
    vector<int> v2{6,9,4,1,9,6,3};
    v1.push_back(10);
    v1.push_back(11);
    v1.push_back(15);
    v1.push_back(12);
    cout<<"size of vector "<<v1.size()<<endl;
    cout<<"capacity of vector "<<v1.capacity()<<endl;
    cout<<"max size of vector "<<v1.max_size()<<endl;
    cout<<"Front of vector "<<v1.front()<<endl;
    cout<<"back of vector "<<v1.back()<<endl;
    auto num = find(v1.begin(), v1.end(),4);
    if(num!=v1.end())
        cout<<*num<<" is present in vector"<<endl;
    else
        cout<<"numbre is not present in vector"<<endl;

    int num1 = count(v1.begin(), v1.end(),9);
    cout<<9<<" is "<<num1<<" times present in vector"<<endl;
    
    int even = count_if(v1.begin(), v1.end(),[](int x){
        return x%2==0;
    });
    cout<<"even numbers "<<even<<"  present in vector"<<endl;
    
    int odd = count_if(v1.begin(), v1.end(),[](int x){
        return x%2!=0;
    });
    cout<<"odd numbers "<<odd<<" present in vector"<<endl;
  
    Person p{"akash", 5};
    Person p1{"akash", 3};
    Person p2{"akash", 8};
    Person p3{"akadsh", 5};
    Person p4{"akash", 5};
    vector<Person> vec;
    vec.push_back(p);
    vec.push_back(p1);
    vec.push_back(p2);
    vec.push_back(p4);
    
    auto lock = find(vec.begin(), vec.end(),p3);
    if(lock!=vec.end())
        cout<<"present"<<endl;
    else
        cout<<"not present"<<endl;
    for_each(v1.begin(),v1.end(),[](int x){cout<<x<<" ";});
    cout<<endl;
    auto it = v1.begin();
    it++;
    v1.erase(it);
    for_each(v1.begin(),v1.end(),[](int x){cout<<x<<" ";});
    return 0;
}