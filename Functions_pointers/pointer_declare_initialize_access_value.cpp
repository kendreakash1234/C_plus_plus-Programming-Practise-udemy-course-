#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int score{100};
    int *score_ptr{&score};
    
    cout<<"Value of score "<<score<<endl;
    cout<<"dereferencing ptr "<<*score_ptr<<endl;
    
    *score_ptr = 200;
    cout<<"Value of score "<<score<<endl;
    cout<<"dereferencing ptr "<<*score_ptr<<endl<<endl;


    double low_temp{12.3};
    double high_temp{34.6};
    double *temp_ptr{&low_temp};
    
    cout<<"Value of low_temp "<<low_temp<<endl;
    cout<<"dereferencing ptr "<<*temp_ptr<<endl;
    
    temp_ptr = &high_temp;
    
    cout<<"Value of high_temp "<<high_temp<<endl;
    cout<<"dereferencing ptr "<<*temp_ptr<<endl<<endl;
    
    string name{"james"};
    int *string_ptr{&score};
    
    cout<<"Value of score "<<name<<endl;
    cout<<"dereferencing ptr "<<*string_ptr<<endl;
    
    name = "akash";
    cout<<"Value of score "<<name<<endl;
    cout<<"dereferencing ptr "<<*string_ptr<<endl<<endl;

    vector<string> v{"aksah", "nishant", "hemant"};
    vector<string> *vector_ptr{};
    
    vector_ptr = &v;
    cout<<"1st element "<<(*vector_ptr).at(0)<<endl;
    cout<<"2nd element "<<(*vector_ptr).at(1)<<endl;
    cout<<"3rd element "<<(*vector_ptr).at(2)<<endl;
    cout<<"4th element "<<(*vector_ptr).at(3)<<endl;
	
    return 0;
}



