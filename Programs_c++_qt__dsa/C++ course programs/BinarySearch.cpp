#include <iostream>

using namespace std;

int main()
{
         int num;
     cout<<"Enter number to be searched"<<endl;
     cin>>num;
     int A[8]={1,2,3,4,5,6,7,8};
     int n=8;
     int start=A[0],end=A[n-1];
     int count;
    //  int mid=(start+end)/2;
    while(start<end)
    {
       int  mid=(start+end)/2;
        if(num>mid)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        count++;
    }
    cout<<"found after "<<count<<" iterations";	
    return 0;
}