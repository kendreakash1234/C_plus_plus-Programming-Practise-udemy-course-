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
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
    }
    cout<<"changing character from UpperCase to lowercase \n"<<str<<endl;
    
   return 0;
}
