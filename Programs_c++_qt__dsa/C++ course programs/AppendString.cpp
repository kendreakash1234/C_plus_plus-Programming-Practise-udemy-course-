#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s,t;
    cout<<"Enter String"<<endl;
    getline(cin,s);
    cout<<"enter string to apend"<<endl;
    getline(cin,t);
    s.append(t);
    cout<<"After appending"<<endl;
    cout<<s;
    return 0;
}
