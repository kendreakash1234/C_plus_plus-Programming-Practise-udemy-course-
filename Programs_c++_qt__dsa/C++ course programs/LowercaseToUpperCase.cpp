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
       	     if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
    cout<<"changing character from Lowercase to UpperCase \n"<<str<<endl;
    
   return 0;
}
