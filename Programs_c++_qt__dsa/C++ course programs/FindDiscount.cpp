#include <iostream>

using namespace std;

int main()
{
    int billAmount;
    float discount=0.0;
   cout<<"Enter bill amount"<<endl;
   cin>>billAmount;
   if(billAmount<100)
   {
       cout<<"no discount";
   }
   else if(billAmount>=100 && billAmount<500)
   {
       discount=10*billAmount/100;
    //   cout<<"Discount is "<<discount;
   }
   else
   {
       discount=20*billAmount/100;
   }
   cout<<"amount is"<<billAmount<<endl;
    cout<<"Discount is "<<discount<<endl;
    cout<<"Payble amount is "<<billAmount-discount<<endl;

    return 0;
} 