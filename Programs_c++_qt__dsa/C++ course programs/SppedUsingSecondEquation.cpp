//Speed using u v and a
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int u,v,a;
    float speed;
    cout<<"enter the intial final velocity and "<<endl;
    cin>>u>>v>>a;
    speed=((v*v)-(u*u))/(2*a);
    cout<<"Speed is "<<speed;
    return 0;
}
