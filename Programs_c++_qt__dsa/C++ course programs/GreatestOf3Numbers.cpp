#include <iostream>

using namespace std;

int main()
{
   int x,y,z;
   cout<<"enter three numbers"<<endl;
   cin>>x>>y>>z;
   if(x>y && x>z)
        cout<<x<<" Is greater number";
    else
        if(y>z)
            cout<<y<<" is greater number";
        else
            cout<<z<<" is greater number";
        
   
  return 0;
}
