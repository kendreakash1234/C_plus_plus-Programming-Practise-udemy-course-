#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(int length=0,int breadth=0)
    {
        this->length=length;
        this->breadth=breadth;
    }
    void setLength(int length)
    {
        this->length=length;
    }
    void setBreadth(int breadth)
    {
        this->breadth=breadth;
    }
    int getLength()
    {
        return this->length;
    }
    int getBreadth()
    {
        return this->breadth;
    }

    int area()
    {
        return this->length*this->breadth;
    }
    int perimeter()
    {
        return 2*(this->length+this->breadth);
    }
    bool isSquare()
    {
        return length==breadth;
    }
    ~Rectangle()
    {
        cout<<"End of Object "<<endl;
    }

};

class Quboid:public Rectangle
{
private:
    int height;
public:
    Quboid(int length=0,int breadth=0,int height=0)
    {
        this->height=height;
        setLength(length);
        setBreadth(breadth);
    }
    void setHeight(int height)
    {
        this->height=height;
    }
    int getHeight()
    {
        return this->height;
    }

    int volume()
    {
        return height*getBreadth()*getLength();
    }
};

int main()
{
    Quboid q;
    q.setHeight(10);
    q.setBreadth(20);
    q.setLength(15);
    int area=q.area();
    int volume=q.volume();
    cout<<"Area of Rectangle is "<<area<<endl;
    cout<<"Volume of given quboid is "<<volume<<endl;
    return 0;
}

