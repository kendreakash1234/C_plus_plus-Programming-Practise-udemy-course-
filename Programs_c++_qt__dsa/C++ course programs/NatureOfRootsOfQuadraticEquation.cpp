#include <iostream>
#include<cmath>
using namespace std;

int main()
{
   int a,b,c,r1,r2;
   cout<<"enter values"<<endl;
   cin>>a>>b>>c;
   int d=(b*b)-(4*a*c);
   if(d==0)
   {
        cout<<"roots are Real and Equal";
        cout<<endl<<(-b/(2*a));
   }
    else
    {
        if(d>0)
        {
            cout<<"roots are Real and Unequal"<<endl;
            cout<<((-b+sqrt(d))/(2*a))<<endl;
            cout<<((-b-sqrt(d))/(2*a))<<endl;
        }
        else
        {
            cout<<"roots are Imaginary";
            cout<<((-b+sqrt(d))/(2*a))<<endl;
            cout<<((-b-sqrt(d))/(2*a))<<endl;
        }
    }
   
  return 0;
}
