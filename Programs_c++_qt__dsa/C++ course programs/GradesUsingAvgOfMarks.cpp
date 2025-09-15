#include <iostream>
typedef int marks;
using namespace std;
int main()
{
    marks m1,m2,m3;
    float avg;
    cout<<"Enter marks of subject"<<endl;
    cin>>m1>>m2>>m3;
    avg=(m1+m2+m3)/3.0;
    if(avg>=60)
    {
        cout<<'A';
    }
    else if(avg<60 && avg>=35)
    {
        cout<<'B';
    }
    else
    {
        cout<<'C';
    }
  return 0;
}
	