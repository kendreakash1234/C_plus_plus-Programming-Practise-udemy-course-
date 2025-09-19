#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

class Person
{
    friend ostream &operator<<(ostream &os, const Person &obj);
    string name;
    int age;
public:
    Person(string lname="", int lage=0):name{lname}, age{lage}{}
    Person(const Person &obj):name{obj.name},age{obj.age}{}
    void set_name(string lname){name = lname;}
    string get_name()const{return name;}
    void set_age(int n){age = n;}
    int get_age()const{return age;}

};

ostream &operator<<(ostream &os, const Person &obj)
{
    os<<obj.name<<" "<<obj.age;
    return os;
}

void test1()
{
    cout<<"//////////Test 1////////////"<<endl;
    [](){cout<<"Hi"<<endl;}();
    [](int x){cout<<x<<endl;}(100);
    [](int x, int y){cout<<x<<" "<<y<<endl;}(100,200);
}

//using value and reference of primitive
void test2()
{
    cout<<"//////////Test 2////////////"<<endl;
    int num1{10};
    int num2{20};
    cout<<"Entered value        "<<num1<<" "<<num2<<endl;
    auto l2 = [](int x){x=400;};
    l2(num1);
    cout<<"After pass value     "<<num1<<" "<<num2<<endl;
    auto l3 = [](int &x, int y){x = 400;y=400;};
    l3(num1,num2);
    cout<<"After reference value "<<num1<<" "<<num2<<endl;
}

//using value and reference of Objects
void test3()
{
    cout<<"//////////Test 3////////////"<<endl;
    Person p{"Akash", 28};
    cout<<"Created object "<<p<<endl;
    auto l4 = [](Person p){cout<<p<<endl;};
    l4(p);
    auto l5 = [](Person &p){cout<<p<<endl;};
    l5(p);
    auto l6 = [](Person &p){
        p.set_name("Kendre");
        p.set_age(60);
        cout<<p<<endl;};

    l6(p);
    cout<<"Updated object "<<p<<endl;
}

//void filter_function(vector<int> &v, function<bool(int)> func)//c++14
void filter_function(vector<int> &v, auto func)//c++20
{
    for(int i : v)
        if(func(i))
            cout<<i<<" ";
}
void test4()
{
    cout<<"//////////Test 4////////////"<<endl;
    vector<int> v{0,1,2,3,4,5,6,7,8,9};
    cout<<"Print full vector"<<endl;
    [](vector<int> x){for(int a : x) cout<<a<<" ";}(v);
    cout<<endl<<"Print number > 4 using predicates"<<endl;
    filter_function(v,[](int x){return x>4;});
    cout<<endl<<"Print number < 8 using predicates"<<endl;
    filter_function(v,[](int x){return x<8;});
    cout<<endl<<"Print number > 4 && <8 using auto using predicates"<<endl;
    filter_function(v,[](int x){return x>4 && x<8;});
    cout<<endl;
}

auto make_lambda()
{
    return [](){cout<<"Hello"<<endl;};
}
//erturn lambda function
void test5()
{
    cout<<"//////////Test 5////////////"<<endl;
    auto lambda_function = make_lambda();
    lambda_function();
}

//using auto in lambda parameters
void test6()
{
    cout<<"//////////Test 6////////////"<<endl;
    auto l7 = [](auto x, auto y){cout<<x<<" "<<y<<endl;};
    l7(3,4);
    l7(3.2,4.3);
    l7(2,4.5);
    l7(Person{"Akash",28}, Person("kendre",60));
}

//simple sort and for_each
void test7()
{
    cout<<"//////////Test 5////////////"<<endl;
    vector<Person> vec{{"akash",28},{"nishant",29},{"hemant",26}};

    for_each(vec.begin(),vec.end(),[](Person &p){cout<<p<<endl;});
    cout<<"Sort vector using name"<<endl;
    sort(begin(vec), end(vec),[](const Person &p1, const Person &p2){return p1.get_name() < p2.get_name();});
    for_each(vec.begin(),vec.end(),[](Person &p){cout<<p<<endl;});
    cout<<"Sort vector using age"<<endl;
    sort(vec.begin(), vec.end(),[](const Person &p1, const Person &p2){return p1.get_age() < p2.get_age();});
    for_each(vec.begin(),vec.end(),[](Person &p){cout<<p<<endl;});

}
int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    return 0;
}
