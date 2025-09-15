#include <stdio.h>
using namespace std;
#include "Mystring.h"

int main()
{
    Mystring m{"akash"};
    m.display();
    cout<<"Length of string is "<<m.get_length()<<endl;
    
    Mystring d;
    d.display();
    cout<<"Length of string is "<<d.get_length()<<endl;
    
    d = m;
    
    d = "This is test";
    
    d.display();
    cout<<"\nMove assignment"<<endl;
    
    Mystring m1{Mystring{"Akash"}};
    m1.display();
    return 0;
}