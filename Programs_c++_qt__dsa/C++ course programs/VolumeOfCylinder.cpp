//Volume of cylinder
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int radius,height;
    float volume;
    cout<<"enter radius and height of cylinderd "<<endl;
    cin>>radius>>height;
    volume=3.14*radius*radius*height;
    cout<<"Volume of cylinder is  "<<volume;
    return 0;
}
