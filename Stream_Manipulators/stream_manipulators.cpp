#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
/*
    int num{255};
    cout<<"dec "<<std::dec<<num<<endl;
    cout<<"hex "<<std::hex<<num<<endl;
    cout<<"oct "<<std::oct<<num<<endl;

    cout<<"Showbase "<<std::showbase<<endl;
    cout<<"dec "<<std::dec<<num<<endl;
    cout<<"hex "<<std::hex<<num<<endl;
    cout<<"oct "<<std::oct<<num<<endl;

    cout<<"ShowPos "<<std::showpos<<endl;
    int num2{-255};//not works on -ve values
    cout<<"dec "<<std::dec<<num<<endl;
    cout<<"dec "<<std::dec<<num2<<endl;


    cout<<std::showbase<<std::uppercase<<endl;
    cout<<std::hex<<num<<endl;

   //setting
    cout.setf(std::ios::showbase);
    cout.setf(std::ios::showpos);
    cout.setf(std::ios::uppercase);


//setting
    cout<<std::resetiosflags(std::ios::basefield);
    cout<<std::resetiosflags(std::ios::showbase);
    cout<<std::resetiosflags(std::ios::showpos);
    cout<<std::resetiosflags(std::ios::uppercase);


    cout<<"Floating point "<<endl;
    double number{123456789.987654321};
    cout<<number<<endl;
    cout<<setprecision(8)<<number<<endl;
    cout<<fixed<<number<<endl;
    cout<<setprecision(5)<<number<<endl;

    cout<<scientific<<setprecision(7)<<number<<endl;
*/
    double d{1234.5678};
    string hello{"Hello"};
    cout<<"Setfill Setw"<<endl;
    cout<<"12345678901234567890123456789012345"<<endl;
    cout<<std::setfill('@')<<setw(10)<<d<<setfill('#')<<setw(10)<<hello<<setfill('$')<<setw(15)<<left<<hello<<endl;

    return 0;
}

