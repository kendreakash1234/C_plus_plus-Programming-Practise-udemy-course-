#include <iostream>
#include<vector>
using namespace std;

void pass_by_ref1(int &a);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &a);
void print_vector(const vector<string> &a);
int main()
{
    int a{3};
    cout<<"Before calling pass_by_ref1 a = "<<a<<endl;
    pass_by_ref1(a);
    cout<<"After  calling pass_by_ref1 a = "<<a<<endl;
    
    string s {"Akash"};
    cout<<"Before calling pass_by_ref2 s = "<<s<<endl;
    pass_by_ref2(s);
    cout<<"After  calling pass_by_ref2 s = "<<s<<endl;
    
    vector<string> v{"akash", "datta","kendre"};
    cout<<"Before calling pass_by_ref3"<<endl;
    print_vector(v);
    pass_by_ref3(v);
    cout<<"After  calling pass_by_ref3"<<endl;
    print_vector(v);
    
    return 0;
}

void pass_by_ref1(int &a)
{
    a = 300;
}

void pass_by_ref2(string &s)
{
    s = "Changed";
}

void pass_by_ref3(vector<string> &a)
{
    a.clear();
}

void print_vector(const vector<string> &a)
{
    for(auto a1 : a)
        cout<<a1<<" ";
}