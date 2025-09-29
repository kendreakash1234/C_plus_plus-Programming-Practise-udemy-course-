#include <iostream>
#include<memory>

using namespace std;

class Test{
  public:


};

int main()
{
    shared_ptr<int> a {new int{1}};
    cout<<"Count "<<a.use_count()<<endl;
    shared_ptr<int> b = a;
    cout<<"Count "<<a.use_count()<<endl;
    shared_ptr<int> c{a};
    cout<<"Count "<<a.use_count()<<endl;
    shared_ptr<int> d;
    d = a;
    cout<<"Count "<<d.use_count()<<endl;

    a.reset();
    cout<<"Count "<<d.use_count()<<endl;
    b.reset();
    c.reset();
    d.reset();
    cout<<"Count "<<d.use_count()<<endl;

    shared_ptr<int> p = make_shared<int>(100);
    shared_ptr<int> q{make_shared<int>(100)};
    shared_ptr<int> r = q;
    shared_ptr<int> s = r;
    shared_ptr<int> t;
    t = r;
    cout<<"Count "<<r.use_count()<<endl;

    cout<<"//////////using class///////////"<<endl;


    shared_ptr<Test> p1 = make_shared<Test>();
    cout<<"Count "<<p1.use_count()<<endl;
    shared_ptr<Test> q1{make_shared<Test>()};
    cout<<"Count "<<q1.use_count()<<endl;
    shared_ptr<Test> r1{p1};
    cout<<"Count "<<r1.use_count()<<endl;
    shared_ptr<Test> s1 = r1;
    shared_ptr<Test> t1;
    t1 = q1;
    cout<<"Count "<<t1.use_count()<<endl;

    return 0;
}
