#include <iostream>

using namespace std;

int main()
{
    
     int A[7]={4,7,3,6,2,9,6};
     int num;
     cout<<"Enter number to be searched"<<endl;
     cin>>num;
    for(int i=0;i<7;i++)
    {
        if(num==A[i])
        {
            cout<<num<<" is found at "<<i;
            break;
        }
    }
    cout<<"did not found "<<num;
    return 0;
}