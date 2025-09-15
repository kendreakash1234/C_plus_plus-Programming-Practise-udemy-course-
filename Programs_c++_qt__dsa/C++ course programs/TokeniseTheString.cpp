#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char ch1[30];
    cout<<"Enter the first string"<<endl;
    cin.getline(ch1,30);
    char *token=strtok(ch1,"=;");
    while(token!=NULL)
    {
        cout<<token<<endl;
        token=strtok(NULL,"=;");
    }

    return 0;
}
