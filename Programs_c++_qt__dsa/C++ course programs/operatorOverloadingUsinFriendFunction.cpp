#include <iostream>

using namespace std;

class Complex
{
    public:
    
    int real;
    int img;
    
    public:
    
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    
    friend Complex operator+(Complex c1, Complex c2);
};
 Complex operator+(Complex c1,Complex c2)
{
    Complex t;
    t.real=c1.real+c2.real;
    t.img=c1.img+c2.img;
    return t;
}
int main()
{
    Complex x1(4,6);
    Complex x2(5,2);
    Complex x3;
    x3=x1+x2;
    cout<<x3.real<<"+i"<<x3.img<<endl;
    return 0;
}
