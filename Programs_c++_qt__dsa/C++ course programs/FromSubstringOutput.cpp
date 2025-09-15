#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char ch1[30];
    char ch2[20];
    cout<<"Enter the main string"<<endl;
    cin.getline(ch1,30);
    cout<<"Enter the substring to find"<<endl;
    cin.getline(ch2,30);
    cout<<"portion of the string starting from "<<ch2<<" is "<<strstr(ch1,ch2);

    return 0;
}
