#include <iostream>
using namespace std;

int print(int a){
    return a;
}

double print(double a){
    return a;
}

float print(float a){
    return a;
}

string print(string a){
    return a;
}


int main()
{
    cout<<"Integer "<<print(5)<<endl;
    cout<<"Double "<<print(5.6)<<endl;
    cout<<"String "<<print("Akash")<<endl;
    cout<<"Float "<<print(5.4F)<<endl;
    return 0;
}