/*Write a program with classes to represent a circle, rectangle, and triangle.
Each class should have data members to represent the actual objects and member functions to read and display objects,
find perimeter and area of the objects, and other useful functions. Use the classes to create objects in your program.*/
#include <iostream>
#include <cmath>
#define PI 3.1415
using namespace std;
class circle
{
    float radius;
    public:
    void getrad(float radius)
    {
        this->radius = radius;
    }
    void perimeter()
    {
        cout<<"Perimeter of circle is "<<2*PI*radius<<endl;
    }
    void area()
    {
        cout<<"Area of circle is "<<PI*radius*radius<<endl;
    }
};
class rectange
{
    int l ,b;
    public:
    void getdata(int l, int b)
    {
        this->l = l;
        this->b = b;
    }
    void perimeter()
    {
        cout<<"Perimeter of rectangle is "<<2*(l+b)<<endl;
    }  
    void area()
    {
        cout<<"Area of rectangle is "<<l*b<<endl;
    }
};
class triange
{
    int x,y,z;
    float s;
    public:
    void getdata(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    void perimeter()
    {
        cout<<"Perimeter of triangle is "<<x+y+z<<endl;
    }
    void area()
    {
        s = (x+y+z)/2;
        cout<<"Area of triangle is "<<sqrt(s*(s-x)*(s-y)*(s-z))<<endl;
    }
};
int main()
{
    circle c;
    rectange r;
    triange t;
    float radius;
    int l,b,x,y,z;

    //cricle
    cout<<"Enter radius of circle: ";
    cin>>radius;
    c.getrad(radius);
    c.perimeter();
    c.area();

    //rectangle
    cout<<"Enter length and breadth of rectangle: "<<endl;
    cin>>l>>b;
    r.getdata(l, b);
    r.perimeter();
    r.area();

    //triangle
    cout<<"Enter sides of triangle: "<<endl;
    cin>>x>>y>>z;
    t.getdata(x, y, z);
    t.perimeter();
    t.area();
    return 0;
}