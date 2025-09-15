#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char ch1[30];
    char ch2[30];
    cout<<"Enter the first string"<<endl;
    cin.getline(ch1,30);
    cout<<"Enter the second string"<<endl;
    cin.getline(ch2,30);
    cout<<"Converting string to long "<<strtol(ch1,NULL,10)<< " and to float "<<strtof(ch2,NULL);

    return 0;
}
