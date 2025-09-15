#include <iostream>

using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r,int i)
    {
        real=r;
        img=i;
    }
    friend ostream & operator<<(ostream &out,Complex &c);
};
ostream & operator<<(ostream &out,Complex &c)
{
    out<<c.real<<"+i"<<c.img;
    return out;
}

int main()
{
    Complex x(10,5);
    cout<<x;
    cout<<endl;
    return 0;
}

