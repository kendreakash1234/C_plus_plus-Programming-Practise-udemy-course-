#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char ch1[30];
    char ch2[20];
    cout<<"Enter the string"<<endl;
    cin.getline(ch1,30);
    strcpy(ch2,ch1);
    cout<<"String copied from ch1 to ch2 "<<ch2;

    return 0;
}
