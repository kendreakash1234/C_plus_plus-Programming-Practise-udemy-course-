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
            cout<<"Monday";
             break;
       case 2:
            cout<<"tuesday";
             break;
       case 3:
            cout<<"wednsday";
             break;
       case 4:
            cout<<"thursday";
             break;
       case 5:
            cout<<"friday";
             break;
        case 6:
            cout<<"saturday";
             break;
        case 7:
            cout<<"sunday";
             break;
        default:
            cout<<"Enter valid number";
   }
    return 0;
}