#include <iostream>

using namespace std;

int main()
{
   int day;
   cout<<"Enter day number"<<endl;
   cin>>day;
   
   switch(day)
   {
       case 1:
            cout<<1;
             break;
       case 2:
            cout<<2;
             break;
       case 3:
            cout<<3;
             break;
       case 4:
            cout<<4;
             break;
       case 5:
            cout<<5;
             break;
        case 6:
            cout<<6;
             break;
        case 7:
            cout<<7;
             break;
         case 8:
            cout<<8;
             break;
         case 9:
            cout<<9;
             break;
        case 0:
            cout<<0;
             break;
        default:
            cout<<"Enter valid number";
   }
    return 0;
}