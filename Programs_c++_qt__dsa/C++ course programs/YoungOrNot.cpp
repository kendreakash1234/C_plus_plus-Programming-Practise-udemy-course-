#include <iostream>

using namespace std;

int main()
{
   int age;
   cout<<"Enter your age"<<endl;
   cin>>age;
   if(age>=12 && age<=50)
       cout<<"you are young";
   else if(age<12)
        cout<<"You are child";
    else
        cout<<"You are old";
   
   return 0;
}
