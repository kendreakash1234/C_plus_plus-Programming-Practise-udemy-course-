#include <iostream>

using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    Rectangle()//Non-parameterized constructor
    {
        length=0;
        breadth=0;
    }
    Rectangle(int l,int b)//parameterized constructor
    {
        setLength(l);
        setBreadth(b);
    }
    Rectangle(Rectangle &r)//copy constructor
    {
        length=r.length;
        breadth=r.breadth;
    }
    void setLength(int l)
    {
        if(l>=0)
        {
            length=l;
        }
        else
        {
            cout<<"You have entered negative length"<<endl;
        }
    }
    void setBreadth(int b)
    {
        if(b>=0)
        {
            breadth=b;
        }
        else
        {
            cout<<"You have entered negative breadth"<<endl;
        }
    }
    int getLength()
    {
       return length;
    }
     int getBreadth()
    {
       return breadth;
    }
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
    Rectangle r1;//Non-parameterized constructor called
    Rectangle r2(4,5);//parameterized constructor called
    Rectangle r3(r2);//copy constructor called 
    
    cout<<"Area of rectangle of r1 object "<<r1.area()<<endl;
    cout<<"Area of rectangle of r2 object "<<r2.area()<<endl;
    cout<<"Area of rectangle of r3 object "<<r3.area()<<endl;
    
    return 0;
}
