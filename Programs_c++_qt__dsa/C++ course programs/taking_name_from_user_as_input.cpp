#include <iostream>

using namespace std;

int main()
{
    string name;
    cout<<"may I know your name"<<endl;
    // cin>>name;
    getline(cin , name);
    cout<<"welcome "<<name<<endl;
}
