#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int global_x{10};

class Person
{
    friend ostream &operator<<(ostream &os, const Person &obj);
    string name;
    int age;
    public:
        Person(string lname="",int lage=0):name{lname},age{lage}{}
        Person(const Person &obj):name{obj.name},age{obj.age}{}
        void set_name(string lname){name = lname;}
        string get_name()const{return name;}
        void set_age(int n){age = n;}
        int get_age()const{return age;}

        auto change_person1(){return [this](string lname, int lage){name = lname; age = lage;};}
        auto change_person2(){return [=](string lname, int lage){name = lname; age = lage;};}
        auto change_person3(){return [&](string lname, int lage){name = lname; age = lage;};}
};
ostream &operator<<(ostream &os, const Person &obj)
{
    os<<obj.name<<" "<<obj.age<<endl;
    return os;
}
//captured by value
void test1()
{
    cout<<"//////////test 1 - captured by value/////////////////"<<endl;
    int local_x{20};
    auto l1 = [local_x](){
    cout<<"local  x = "<<local_x<<endl;
    cout<<"global x = "<<global_x<<endl;
    //local_x = 20;//compiler error - this is bydefault const in this -- use mutable to edit local varibal local_x
    };
    l1();
    cout<<"outside lambda local  x = "<<local_x<<endl;
    cout<<"outside lambda global  x = "<<global_x<<endl;
}

//using mutable - to change the value in lambda
void test2()
{
    cout<<"//////////test 2 - using mutable - to change the value in lambda/////////////////"<<endl;
    int local_x{20};
    auto l1 = [local_x]() mutable{
    cout<<"local  x = "<<local_x<<endl;
    cout<<"global x = "<<global_x<<endl;
    local_x += 20;
    global_x += 30;
    };
    l1();
    cout<<"outside lambda local  x = "<<local_x<<endl;//x is changing only inside lambda not outside x =20
    cout<<"outside lambda global  x = "<<global_x<<endl;//global variable will change x = 40
    l1();
    cout<<"outside lambda local  x = "<<local_x<<endl;//x is changing only inside lambda not outside x =20
    cout<<"outside lambda global  x = "<<global_x<<endl;//global variable will change x = 70

}
//using reference
void test3()
{
cout<<"//////////test 3 - using reference/////////////////"<<endl;
    int local_x{20};
    auto l1 = [&local_x]() mutable{
    cout<<"local  x = "<<local_x<<endl;
    cout<<"global x = "<<global_x<<endl;
    local_x += 20;
    global_x += 30;
    };
    l1();
    cout<<"outside lambda local  x = "<<local_x<<endl;//x is reference so it will change everywhere x =40
    cout<<"outside lambda global  x = "<<global_x<<endl;//global variable will change x = 100
    l1();
    cout<<"outside lambda local  x = "<<local_x<<endl;//x is changing only inside lambda not outside x = 60
    cout<<"outside lambda global  x = "<<global_x<<endl;//global variable will change x = 130

}
//Default by value
void test4()
{
    cout<<"//////////test 4 - Default by value/////////////////"<<endl;
    int x{100};
    int y{200};
    int z{300};
    auto l= [=]()mutable{
    x+=100;
    y+=100;
    cout<<"Inside lambda x = "<<x<<endl;
    cout<<"Inside lambda y = "<<y<<endl;
    cout<<"Inside lambda z = "<<z<<endl;
    };
    l();
    cout<<"outside lambda x = "<<x<<endl;
    cout<<"outside lambda y = "<<y<<endl;
    cout<<"outside lambda z = "<<z<<endl;

}
//Default by reference
void test5()
{
    cout<<"//////////test 5 - Default by reference/////////////////"<<endl;
    int x{100};
    int y{200};
    int z{300};
    auto l= [&]()mutable{
    x+=100;
    y+=100;
    z+=100;
    cout<<"Inside lambda x = "<<x<<endl;
    cout<<"Inside lambda y = "<<y<<endl;
    cout<<"Inside lambda z = "<<z<<endl;
    };
    l();
    cout<<"outside lambda x = "<<x<<endl;
    cout<<"outside lambda y = "<<y<<endl;
    cout<<"outside lambda z = "<<z<<endl;

}
//Default capture by value , y by reference
void test6()
{
    cout<<"//////////test 6 - Default capture by value , y by reference/////////////////"<<endl;
    int x{100};
    int y{200};
    int z{300};
    auto l= [=, &y]()mutable{
    x+=100;
    y+=100;
    z+=100;
    cout<<"Inside lambda x = "<<x<<endl;
    cout<<"Inside lambda y = "<<y<<endl;
    cout<<"Inside lambda z = "<<z<<endl;
    };
    l();
    cout<<"outside lambda x = "<<x<<endl;
    cout<<"outside lambda y = "<<y<<endl;
    cout<<"outside lambda z = "<<z<<endl;
}
//Default capture by reference , y & z by value
void test7()
{
    cout<<"//////////test 7 - Default capture by reference , y by value/////////////////"<<endl;
    int x{100};
    int y{200};
    int z{300};
    auto l= [&, y,z]()mutable{
    x+=100;
    y+=100;
    z+=100;
    cout<<"Inside lambda x = "<<x<<endl;
    cout<<"Inside lambda y = "<<y<<endl;
    cout<<"Inside lambda z = "<<z<<endl;
    };
    l();
    cout<<"outside lambda x = "<<x<<endl;
    cout<<"outside lambda y = "<<y<<endl;
    cout<<"outside lambda z = "<<z<<endl;
}


void test8()
{
    cout<<"//////////test 8 - with objects/////////////////"<<endl;
    Person p("akash", 28);
    cout<<p;

    auto change_person1 = p.change_person1();
    change_person1("asdf",1234);
    cout<<p;
    auto change_person2 = p.change_person2();
    change_person2("asdf",2222);
    cout<<p;
    auto change_person3 = p.change_person3();
    change_person3("asdf",1111);
    cout<<p;
}
class Lambda
{
    int y;
public:
    Lambda(int y):y{y}{}
    void operator()(int x){
        cout<<x+y<<endl;
    }
};
void test9()
{
    cout<<"//////////test 9 - lambda/////////////////"<<endl;

    int y{100};
    Lambda lambda1(y);
    auto lambda2 = [y](int x){cout<<x+y<<endl;};

    lambda1(100);
    lambda2(200);
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
    test8();
    test9();
    return 0;
}
