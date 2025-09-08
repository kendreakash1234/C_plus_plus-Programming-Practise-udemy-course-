#include <iostream>
using namespace std;

class Shape{
    
    public:
    Shape(){};
    virtual void display()=0;
    virtual ~Shape(){};
};

class Circle : public Shape{
    public:
    virtual void display() override{
        cout<<"Circle display"<<endl;
    }
    virtual ~Circle(){};
};

class Square : public Shape{
    public:
    virtual void display() override{
        cout<<"Square display"<<endl;
    }
    virtual ~Square(){};
};


int main()
{
    Shape *s = new Circle;
    s->display();
    
    Shape *c = new Square;
    c->display();
    
    return 0;
}