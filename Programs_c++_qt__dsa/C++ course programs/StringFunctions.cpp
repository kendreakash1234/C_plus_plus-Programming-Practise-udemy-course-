#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout<<"Enter String"<<endl;
    getline(cin,s);
    cout<<"Length of string is "<<s.length()<<endl;
    cout<<"size of string is "<<s.size()<<endl;
    cout<<"capacity of string is "<<s.capacity()<<endl;
    s.resize(20);
        cout<<"capacity of string after resizing "<<s.capacity()<<endl;
    cout<<"max size of string is "<<s.max_size()<<endl;
    s.clear();
        cout<<"Length of string is after clear "<<s.length()<<endl;

    cout<<"is string empty "<<s.empty()<<endl;

    return 0;
}
