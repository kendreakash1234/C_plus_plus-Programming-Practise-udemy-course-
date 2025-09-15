#include <iostream>

using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    Rectangle();
    Rectangle(int l=1,int b=1);
    Rectangle(Rectangle &r);
    void setLength(int l);
    void setBreadth(int b);
    int getLength(){return length;};
    int getBreadth(){return breadth;};
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};
Rectangle::Rectangle()
{
    length=1;
    breadth=1;
}
Rectangle::Rectangle(int l,int b)
{
    cout<<"parameterized Constructor called"<<endl;
    length=l;
    breadth=b;
}

void Rectangle::setLength(int l)
{
    if(l>=0)
    {
        length=0;
    }
    else
    {
        cout<<"Length should be not negative"<<endl;
    }
}

void Rectangle::setBreadth(int b)
{
    if(b>=0)
    {
        breadth=0;
    }
    else
    {
        cout<<"breadth should be not negative"<<endl;
    }
}

int Rectangle::area()
{
    return length*breadth;
}

int Rectangle::perimeter()
{
    return 2*(length+breadth);
}

bool Rectangle::isSquare()
{
    return length==breadth;
}

Rectangle::~Rectangle()
{
    cout<<"Destructor called"<<endl;
}

int main()
{
    Rectangle r(4,7);
    cout<<"Area of rantangle r is "<<r.area()<<endl;
    cout<<"Perimeter of rectangle r is "<<r.perimeter()<<endl;
    cout<<"Is given rectangle square = "<<r.isSquare()<<endl;
    return 0;
}
