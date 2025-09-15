#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream ofs("mytext.txt");
    ofs<<"akash"<<endl;
    ofs<<5<<endl;
//    ofs<<"Kendre"<<endl;
//    ofs<<"cdac"<<endl;
    cout<<5<<endl;
    ofs.close();
    return 0;
}

