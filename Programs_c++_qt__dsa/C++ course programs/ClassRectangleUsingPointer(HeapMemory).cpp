#include <iostream>

using namespace std;

class Rectangle
{
    public:
    int length;
    int breadth;
    // public:
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    Rectangle *p;
    p=new Rectangle();
    p->length=10;
    p->breadth=20;
    
    cout<<"Area of rectangle using pointer "<<p->area()<<endl;
    
    return 0;
}
