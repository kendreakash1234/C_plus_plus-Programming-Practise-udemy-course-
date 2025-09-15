#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str,temp;
    cout<<"Enter a string"<<endl;
    getline(cin,str);
    int length=str.length();
    temp.resize(length);
    for(int i=0,j=length-1;i<length;i++,j--)
    {
        // temp=str.at(i)+temp;
        temp[j]=str[i];
        
    }
    // cout<<"Temp "<<temp<<endl;
    if(temp==str)
    {
        cout<<"string is palindrome"<<endl;
        
    }
    else
    {
        cout<<"String is not palindrome"<<endl;
    }
    // cout<<str<<endl;
    // cout<<temp<<endl;
}