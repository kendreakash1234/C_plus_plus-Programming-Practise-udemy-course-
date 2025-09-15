#include <iostream>

using namespace std;

class Rational
{
private:
    int p;
    int q;

public:

    Rational(int p=0,int q=0)
    {
        this->p=p;
        this->q=q;
    }
    friend Rational operator+(Rational x,Rational y);
    friend ostream & operator<<(ostream &out,Rational &r);
};

Rational operator+(Rational x,Rational y)
{
    Rational t;
    t.p=x.p*y.q+y.p*x.q;
    t.q=x.q*y.q;
//    cout<<t.p<<" "<<t.q;
    return t;
}

ostream & operator<<(ostream &out,Rational &r)
{
    out<<r.p<<"/"<<r.q;
    return out;
}

int main()
{
    Rational r1(4,3);
    Rational r2(6,5);
    Rational r3;
    r3=r1+r2;
    cout<<"Rational number of "<<r1<<" And "<<r2<<" is "<<r3;
    cout<<endl;
    return 0;
}

