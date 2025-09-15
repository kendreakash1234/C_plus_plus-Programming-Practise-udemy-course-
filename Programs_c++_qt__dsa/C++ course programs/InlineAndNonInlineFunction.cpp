#include <iostream>

using namespace std;

class Rectangle
{
   public:
   void fun1()
   {
       cout<<"Inline Function 1"<<endl;
   }
   void fun2();
};
void Rectangle::fun2()
{
    cout<<"Non Inline Function 2"<<endl;
}
int main()
{
    Rectangle r;
    r.fun1();
    r.fun2();
    return 0;
}
