#include <iostream>

using namespace std;

int main()
{
   int x,y;
   cout<<"enter 2 numbers"<<endl;
   cin>>x>>y;
   if(y==0)
   cout<<"divison by 0 invalid";
   else
   cout<<"division is "<<x/y;
   return 0;
}
