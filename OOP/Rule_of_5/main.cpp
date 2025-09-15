#include <stdio.h>
#include <vector>
using namespace std;
#include "Mystring.h"

int main()
{
    cout<<"Overload "<<endl;
    Mystring m{"akash"};
    m.display();
    cout<<"Length of string is "<<m.get_length()<<endl;
    
    cout<<"\nDefault"<<endl;
    Mystring d;
    d.display();
    cout<<"Length of string is "<<d.get_length()<<endl;
    
    cout<<"\nCopy"<<endl;
    Mystring d2 = m;
    d2.display();
    cout<<"Length of string is "<<d2.get_length()<<endl;
    
    cout<<"\nCopy assignment"<<endl;
    d = m;
    d.display();
    cout<<"Length of string is "<<d.get_length()<<endl;

    cout<<"\nMove "<<endl;
    vector<Mystring> v;
    v.push_back(Mystring{"kendre"});
    Mystring p = move(Mystring("asdfg"));
    cout<<"\nMove assignment"<<endl;
    Mystring m1;
    m1 = Mystring{"Akash"};
    m1.display();
    cout<<"Length of string is "<<m1.get_length()<<endl;

    return 0;
}