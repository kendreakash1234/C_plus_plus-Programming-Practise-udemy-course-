#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>


class Person{
    string name;
    int age;
    public:
    Person():name{""},age{0}{

    }
    Person(string n, int a):name{n},age{a}{

    }
    bool operator<(const Person &obj){
        return (this->age < obj.age);
    }
    bool operator==(const Person &obj){
        return (this->name == obj.name && this->age == obj.age);
    }
    string get_name(){
        return name;
    }

    int get_age(){
        return age;
    }
};

int main()
{
    Person p{"akash",28};
    Person p1{"datta",9};
    Person p2{"kendre",6};

    vector<Person> vec;
    vec.push_back(p);
    vec.push_back(p1);
    vec.push_back(p2);

    auto loc = find(vec.begin(), vec.end(), Person{"akash",28});

    if(loc!=vec.end())
        cout<<"found name = "<<loc->get_name()<<" age = "<<loc->get_age()<<endl;
    else
        cout<<"not found"<<endl;


    vector<int> v{1,2,3,2,1,2,2,3,7,4,5,6,4,3,2,1};
    int x = 2;
    int num =count(v.begin(), v.end(), x);
    cout<<x<<" is "<<num<<" times"<<endl;
    cout<<"count only even elements"<<endl;
    int even = count_if(v.begin(), v.end(), [](int x){return x%2==0;});
    cout<<x<<" is "<<even<<" times"<<endl;
    cout<<"count only odd elements"<<endl;
    int odd = count_if(v.begin(), v.end(), [](int x){return x%2!=0;});
    cout<<x<<" is "<<odd<<" times"<<endl;
    cout<<"count only num >=5"<<endl;
    int more = count_if(v.begin(), v.end(), [](int x){return x>=5;});
    cout<<"more than "<<5<<"  "<<more<<" elements"<<endl;

    replace(v.begin(), v.end(), 1,100);

    for_each(v.begin(), v.end(),[](int x){cout<<x<<" ";});

    cout<<"\nsort"<<endl;
    sort(v.begin(), v.end(), greater<int>());
    for_each(v.begin(), v.end(),[](int x){cout<<x<<" ";});

    string str = "Akash";
    cout<<"\nBefore "<<str<<endl;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<"After "<<str<<endl;

    return 0;
}
