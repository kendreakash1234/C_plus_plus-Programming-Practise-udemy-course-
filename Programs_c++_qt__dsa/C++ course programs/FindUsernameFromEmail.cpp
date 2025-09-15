#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str,username;
	
	/*
	int i=(int)str.find('@');
	username=str.substr(0,i);
	*/
    cout<<"Enter email address"<<endl;
    getline(cin,str);
    int length=str.length();
    username.resize(20);
    for(int i=0;i<length;i++)
    {
        if(str[i]=='@')
        {
            break;
        }
        username[i]=str[i];
    }
    cout<<username;
}