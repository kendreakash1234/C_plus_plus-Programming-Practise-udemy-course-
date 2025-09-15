#include <iostream>
using namespace std;
int g=0;   //global
void fun()
{
    int a=8; //static
    g=g+a;
    cout<<g<<endl;
}
int main()
{
    int  c=9; //local
   g=19;
   fun();
   g+=c;
   cout<<g;
    return 0;
}

