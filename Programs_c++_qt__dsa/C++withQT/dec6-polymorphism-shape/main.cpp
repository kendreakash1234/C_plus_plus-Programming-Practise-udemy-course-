#include <iostream>

using namespace std;

class Shape
{
public:
    virtual float area()=0;
    virtual float perimeter()=0;
};

class Rectangle:public Shape
{
 private:
    float length;
    float breadth;
public:
    Rectangle(float l=1,float b=1)
    {
        length=l;
        breadth=b;
    }
    float area()
    {
        return length*breadth;
    }
    float perimeter()
    {
        return 2*(length+breadth);
    }
};

class Circle:public Shape
{
private:
    float radius;
public:
    Circle(float r=1)
    {
        radius=r;
    }
    float area(){
        return 3.14*radius*radius;
    }
    float perimeter(){
        return 2*3.14*radius;
    }
};

int main()
{
    Shape *s=new Rectangle(4,6);
    cout<<"Area of Rectangle "<<s->area()<<endl;
    cout<<"Perimeter of rectangle "<<s->perimeter()<<endl;
    s=new Circle(7);
    cout<<"Area of circle "<<s->area()<<endl;
    cout<<"Perimeter of Circle "<<s->perimeter()<<endl;
    return 0;
}

