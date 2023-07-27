/*    Write a class for instantiating the objects that represent the two-dimensional Cartesian coordinate system.
A. Make a particular member function of one class as a friend function of another class for addition.
B. Make the other three functions to work as a bridge between the classes for multiplication, division, and subtraction.
C. Also write a small program to demonstrate that all the member functions of one class are the friend functions of another class if the former class is made friend to the latter.
Make least possible classes to demonstrate all the above in a single program without conflict.*/

#include <iostream>
using namespace std;
class Cartesian
{
    float x, y;
    public:
    //initiliaztion
    Cartesian(float a, float b): x(a), y(b) {}

    //friend section
    friend class Addition;
};
class Addition
{
    public:
    void add(const Cartesian o, const Cartesian p)
    {
        cout<<"The sum is: "<<o.x+p.x<<" "<<o.y+p.y<<endl;
    }
    void mutliply(const Cartesian o, const Cartesian p)
    {
        cout<<"The sum is: "<<o.x*p.x<<" "<<o.y*p.y<<endl;
    }
    void subtract(const Cartesian& o, const Cartesian& p)
    {
        cout<<"The sum is: "<<o.x-p.x<<" "<<o.y-p.y<<endl;
    }
    void division(const Cartesian& o, const Cartesian& p)
    {
        cout<<"The sum is: "<<o.x/p.x<<" "<<o.y/p.y<<endl;
    }
};
int main()
{
    Cartesian o(1,2);
    Cartesian p(3,4);
    Addition a;
    a.add(o,p);
    a.mutliply(o,p);
    a.subtract(o,p);
    a.division(o,p);
    return 0;
}
