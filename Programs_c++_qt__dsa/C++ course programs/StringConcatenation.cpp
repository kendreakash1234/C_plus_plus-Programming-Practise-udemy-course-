#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char ch1[30];
    char ch2[20];
    cout<<"Enter the strings"<<endl;
    cin.getline(ch1,30);
    cin.getline(ch2,30);
    strcat(ch1,ch2);
    cout<<"String concatenation "<<ch1;

    return 0;
}
