#include <iostream>
using namespace std;
const double pi=3.14159;

double calc_area_circle(double radius)
{
    return pi*radius*radius;
}

void area_of_circle()
{
    double radius{};
    cout<<"Enter the radius : ";
    cin>>radius;
    cout<<"Area of Circle whose radius is "<<radius<<" is "<<calc_area_circle(radius)<<endl;
}

double calc_volume_of_cylinder(double radius, double height){
    return pi*radius*radius*height;    
}

void volume_cylinder()
{
    double radius{}, height{};
    cout<<"Enter the radius and height of cylinder: ";
    cin>>radius>>height;
    cout<<"Volume of cylinder is "<<calc_volume_of_cylinder(radius, height)<<endl;
}

int main()
{
    area_of_circle();
    volume_cylinder();

    return 0;
}