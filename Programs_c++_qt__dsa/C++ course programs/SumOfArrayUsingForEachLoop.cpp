#include <iostream>

using namespace std;

int main()
{
     int A[]={2,4,6,8,10};
    int sum=0;
    for(int x:A)
    {
        sum=sum+x;
    }
    cout<<"Sum of given array is "<<sum;
    return 0;
}