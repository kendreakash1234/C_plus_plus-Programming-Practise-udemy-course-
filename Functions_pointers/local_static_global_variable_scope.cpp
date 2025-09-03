#include <iostream>
#include<vector>
using namespace std;

int num{100};

void local_variable(int x)
{
    int num{1000};
    cout<<"\nlocal_variable num = "<<num<<endl;
    num = x;
    cout<<"local_variable num = "<<num<<endl;
}

void global_variable()
{
    cout<<"\nglobal_variable num = "<<num<<endl;
    num*=2;
    cout<<"global_variable num = "<<num<<endl;
}

void static_variable()
{
    static int num{500};
    cout<<"\nstatic_variable num = "<<num<<endl;
    num+=1000;
    cout<<"static_variable num = "<<num<<endl;

}

int main()
{
    local_variable(10);
    local_variable(20);
    
    global_variable();
    global_variable();
    
    static_variable();
    static_variable();
    
    return 0;
}
