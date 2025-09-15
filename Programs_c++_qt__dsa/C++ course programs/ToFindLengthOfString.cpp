#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int count=0;
    cout<<"Enter the string"<<endl;
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    cout<<"Length of string is "<<count<<endl;
    
    int length=0;
    string::iterator it;
    for(it=str.begin();it!=str.end();it++)
    {
        length++;
    }
    cout<<"Length of string using iterator is "<<length<<endl;
    return 0;
}
