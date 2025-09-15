#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char ch1[30];
    char ch2;
    cout<<"Enter the  string"<<endl;
    cin.getline(ch1,30);
    cout<<"Enter the character from where to find string"<<endl;
    cin>>ch2;
    cout<<"portion of the string starting from "<<ch2<<" is "<<strrchr(ch1,ch2);

    return 0;
}
