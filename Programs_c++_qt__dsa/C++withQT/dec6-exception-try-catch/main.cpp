
#include <iostream>
#include<string>
using namespace std;

int main()
{
    int a=10;
    int b=0;
    int c;
    try
    {
        if(b==0)
            throw string("Division by zero");
        c=a/b;
//        if(1)
//            throw 1.5;
        cout<<c;
    }
    catch(string e)
    {
        cout<<e<<endl;
    }
    catch(double d)
    {
        cout<<"Double exception "<<d<<endl;
    }
    catch(...)
    {
        cout<<"Exception occured "<<endl;
    }

    cout<<"Program has ended"<<endl;
    return 0;
}

