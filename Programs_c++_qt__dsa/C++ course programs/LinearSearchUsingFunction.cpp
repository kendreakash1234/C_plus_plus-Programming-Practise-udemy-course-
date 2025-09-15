#include <iostream>
using namespace std;

int fun(int A[],int len,int k)
{
    int count=0;
    for(int i=0;i<len;i++)
    {
        if(A[i]==k)
        {
            return count;
        }
        count++;
    }
    return 0;
}

int main()
{
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int a[size];
    cout<<"Enter elements in array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    int key;
    cout<<"Enter the element you want to search"<<endl;
    cin>>key;
    int pos=fun(a,size,key);
    cout<<key<<" is present at position "<<pos;    
    return 0;
}
