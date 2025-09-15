#include <iostream>
#include <string>
//#include <thread>

using namespace std;

void func(string txt)
{
    cout<<txt<<endl;
}

int main()
{
    cout << "Start" << endl;
//    thread th(func, "Happy weekend . . . ");
//    th.join();
    return 0;
}

