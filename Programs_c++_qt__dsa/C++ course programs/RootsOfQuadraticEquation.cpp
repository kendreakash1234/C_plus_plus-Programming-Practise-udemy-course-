//Roots of qudratic equation 
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c,r1,r2;
    cout<<"enter the coefficients"<<endl;
    cin>>a>>b>>c;
    r1=(-b-sqrt(b*b-4*a*c))/(2*a);
    r2=(-b+sqrt(b*b-4*a*c))/(2*a);
    cout<<"roots off quadratic equations are "<<r1<<" and "<<r2;;
    return 0;
}
