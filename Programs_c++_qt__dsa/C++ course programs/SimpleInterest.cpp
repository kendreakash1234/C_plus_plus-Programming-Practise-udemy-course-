//Simple Interest
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int P,R,T;
    float SI;
    cout<<"enter principle rate and time period "<<endl;
    cin>>P>>R>>T;
    SI=(P*R*T)/100;
    cout<<"Simple Interest is  "<<SI;
    return 0;
}
