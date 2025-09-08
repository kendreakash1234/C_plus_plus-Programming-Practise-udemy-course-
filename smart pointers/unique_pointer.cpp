#include <iostream>
#include <memory>
using namespace std;
#include <vector>

class Account{
    string name;
    int age;
    public:
    Account(){
        cout<<"Account constructor"<<endl;
        name = "None";
        age = 0;
    }
    
    Account(string lname, int lage):name{lname}, age{lage}{
        cout<<"Account overload constructor"<<endl;
    }
    
    void display(){
        cout<<name<<" is "<<age<<" years old"<<endl;
    }
    ~Account(){
        cout<<"Account Destructor"<<endl;
    }
};

int main()
{
    unique_ptr<Account> p = make_unique<Account>();
    p->display();
    unique_ptr<Account> p1 = make_unique<Account>("akash", 28);
    p1->display();
    
    // unique_ptr<Account> p2 = p1;//compiler error
    unique_ptr<Account> p4 = move(p1);
    p4->display();
    if(p1==nullptr)
        cout<<"p1 is nullptr"<<endl;
    // p1->display();//not calliing that function
    
     vector<unique_ptr<Account>> ptr;
     ptr.push_back(move(p));
     ptr.push_back(make_unique<Account>("akash", 28));
     ptr.push_back(make_unique<Account>("kendre", 28));
     ptr.push_back(make_unique<Account>("hanuman", 26));
     ptr.push_back(make_unique<Account>("datta", 60));
    
    for(auto &x : ptr)
    {
        x->display();
    }
    
    return 0;
}