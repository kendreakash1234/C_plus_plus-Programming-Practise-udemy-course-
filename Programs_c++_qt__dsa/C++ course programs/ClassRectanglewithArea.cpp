#include <iostream>

using namespace std;

class Rectangle
{
    public:
    int length;
    int breadth;
    public:
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
    Rectangle r1;
    r1.length=23;
    r1.breadth=14;
    cout<<"Area of rectangle r1 is "<<r1.area()<<endl;
    
    return 0;
}
