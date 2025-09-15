#include <iostream>

using namespace std;

int global_var{40};//global variable

int main()
{
    int local_var{30};
	
    cout<<"Global = "<<global_var<<" Local = "<<local_var<<endl;

    return 0;
}
