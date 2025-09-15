#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int words=0,uvowels=0,lvowels=0,uconsonant=0,lconsonant=0;
    cout<<"Enter the string"<<endl;
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'|str[i]=='e'|str[i]=='i'|str[i]=='o'|str[i]=='u')
        {
          lvowels++;  
        }
        else if(str[i]=='A'|str[i]=='E'|str[i]=='I'|str[i]=='O'|str[i]=='U')
        {
            uvowels++;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            lconsonant++;
        }
        else if(str[i]>=65 && str[i]<=90)
        {
            lconsonant++;
        }
        else if(str[i]=' ')
        {
            words++;
        }
    }
    cout<<"words = "<<words+1<<endl;
    cout<<"uvowels = "<<uvowels<<endl;
    cout<<"lvowels = "<<lvowels<<endl;
    cout<<"uconsonant = "<<uconsonant<<endl;
    cout<<"lconsonant = "<<lconsonant<<endl;
   return 0;
}
