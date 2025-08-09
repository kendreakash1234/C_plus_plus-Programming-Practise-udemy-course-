#include<iostream>

using namespace std;

int main()
{   
    //character type
    char ch{'c'};
    
    //Integer type
    short a{3};
    unsigned short b{3};
    int c{-6};
    unsigned int d{6};
    long int e(-12345);
    unsigned long int f{23456789};
    long long int g(-1234567890);
    unsigned long long int h{132478567876543};
    
    //Floating Type
    float i{1.2345678};
    double j{4.1343465094387598379};
    long double k{6.12332545745983204792375};
    
    //Boolean
    bool isTrue{true};
    
    cout<<"Char "<<ch<<endl;
    cout<<"short "<<a<<endl;
    cout<<"unsigned short "<<b<<endl;
    cout<<"int "<<c<<endl;
    cout<<"unsigned int "<<d<<endl;
    cout<<"long "<<e<<endl;
    cout<<"unsigned long "<<f<<endl;
    cout<<"long long "<<g<<endl;
    cout<<"unsigned long long "<<h<<endl;
    
    cout<<"float "<<i<<endl;
    cout<<"double "<<j<<endl;
    cout<<"long double "<<k<<endl;
    
    cout<<"Bool "<<isTrue<<endl;
    
    
    //Size of data types
    cout<<"Size of Char "<<sizeof(ch)<<endl;
    cout<<"Size of short "<<sizeof(a)<<endl;
    cout<<"Size of unsigned short "<<sizeof(b)<<endl;
    cout<<"Size of int "<<sizeof(c)<<endl;
    cout<<"Size of unsigned int "<<sizeof(d)<<endl;
    cout<<"Size of long "<<sizeof(e)<<endl;
    cout<<"Size of unsigned long "<<sizeof(f)<<endl;
    cout<<"Size of long long "<<sizeof(g)<<endl;
    cout<<"Size of unsigned long long "<<sizeof(h)<<endl;
    
    cout<<"Size of float "<<sizeof(i)<<endl;
    cout<<"Size of double "<<sizeof(j)<<endl;
    cout<<"Size of long double "<<sizeof(k)<<endl;
    
    cout<<"Size of Bool "<<sizeof(isTrue)<<endl;
    
    return 0;
}