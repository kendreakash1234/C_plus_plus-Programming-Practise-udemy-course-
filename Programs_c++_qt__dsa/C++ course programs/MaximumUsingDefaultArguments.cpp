#include <iostream>
using namespace std;

int max(int a=0,int b=0,int c=0)
{
    return a>b&&a>c?a:(b>c?b:c);
}
int main()
{
    cout<<max(4)<<endl;
    cout<<max(4,5)<<endl;
    cout<<max(4,5,6)<<endl;
    return 0;
}

