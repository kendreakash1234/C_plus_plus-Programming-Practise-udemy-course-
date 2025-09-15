#include <iostream>

using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;
    public:
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
    Rectangle r;
    r.setLength(10);
    r.setBreadth(20);
    
    cout<<"Area of rectangle using pointer "<<r.area()<<endl;
    
    return 0;
}
