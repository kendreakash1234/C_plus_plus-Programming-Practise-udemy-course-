#include <iostream>
#include <vector>
using namespace std;

class Account{
    string name;
    int age;
    public:
    Account(string l, int a):name{l}, age{a}{}
    string get_name(){
        return name;
    }
    int get_age(){
        return age;
    }
};

int main()
{
    vector<Account> vec;
    vec.push_back(Account{"Akash",28});
    vec.push_back(Account{"nishant",28});
    vec.push_back(Account{"ved",24});
    
    vector<Account>::iterator it = vec.begin();
    while(it!=vec.end()){
        cout<<it->get_name()<<" is "<<it->get_age()<<endl;
        ++it;
    }
    
    
    return 0;
}