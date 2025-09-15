#include <iostream>

using namespace std;

int main()
{
    
     int A[7]={4,7,3,6,2,9,6};
    int max=A[0];
    for(int i=0;i<7;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    cout<<"Max number in given array is "<<max;
    return 0;
}