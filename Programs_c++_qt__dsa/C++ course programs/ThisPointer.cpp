#include <iostream>

using namespace std;

class Rectangle
{
  private:
  int length;
  int breadth;
  public:
  Rectangle(int length ,int breadth)
  {
      cout<<"Inside Rectangular constructor"<<endl;
      this->length=length;
      this->breadth=breadth;
  }
  int area()
  {
      cout<<"Length = "<<length<<endl;
      cout<<"breadth = "<<breadth<<endl;
      return (this->length*this->breadth);
  }
};

int main()
{
    Rectangle r(10,5);
    cout<<r.area();
    return 0;
}
