#include <iostream>

using namespace std;

int main()
{
   int n;
   cout<<"enter the number of elements"<<endl;
   cin>>n;
   int A[n];
   cout<<"Enter the elements in array"<<endl;
   for(int i=0;i<n;i++)
   {
       cin>>A[i];
   }
   int sum=0;
   for(int i=0;i<n;i++)
   {
       sum+=A[i];
   }
   float avg=(float)sum/n;
   cout<<"Average of elements of array is "<<avg;
}
