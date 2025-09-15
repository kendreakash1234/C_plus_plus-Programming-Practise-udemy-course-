#include <iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    ifstream ifs;
    ifs.open("mytext.txt");
    if(ifs)
        cout<<"File is open"<<endl;
    string n;
    int a;
    ifs>>n>>a;
    ifs.close();
    cout<<"String is "<<n<<" "<<a<<endl;
}
