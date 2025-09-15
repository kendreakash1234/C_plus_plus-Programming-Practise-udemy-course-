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
    int getLength();
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};


int main()
{
    
    return 0;
}
