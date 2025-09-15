//Distance betwwen 2 points
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1,y1,x2,y2;
    float distance;
    cout<<"enter coordination points"<<endl;
    cin>>x1>>y1>>x2>>y2;
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<"distance between two points is  "<<distance;
    return 0;
}
