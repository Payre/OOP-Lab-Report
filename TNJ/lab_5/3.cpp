/*Write a program to compare two objects of a class that contains an integer value as its data member.
Make overloading functions to overload equality(==), less than(<), greater than(>), not equal (!=), greater than or equal to (>=),
and less than or equal to(<=) operators using member operator functions.

Reference: https://www.youtube.com/watch?v=smhS07tV5xg

a => lhs, b=> rhs
a.operator<(b)*/
#include <iostream>
using namespace std;
class Square
{
    double side;

    public:
    Square(int x=0): side(x){}

    //accessor
    double getSide() const {return side;}
    double getArea() const {return side * side;}
    bool operator<(const Square& /*parameter, we are comparing not changing anything*/rhs) const;
    bool operator==(const Square& rhs) const;
    bool operator>(const Square& rhs) const;
    bool operator!=(const Square& rhs) const;
    bool operator>=(const Square& rhs) const;
    bool operator<=(const Square& rhs) const;
};

int main()
{
    Square a(20), b(20);
    if (a==b)
        cout<<"a equal to b"<<endl;
    else
        cout<<"a is not equal to b"<<endl;
    return 0;
}

//equal to (==)
bool Square::operator==(const Square& rhs) const
{
    return getArea()==rhs.getArea();
}

//less than(<)
bool Square::operator<(const Square& rhs) const
{
    return getArea()< rhs.getArea(); //this returns true or false
}

//greater than(>)
bool Square::operator>(const Square& rhs) const
{
    return getArea()>rhs.getArea();
}

//not equal (!=)
bool Square::operator!=(const Square& rhs) const
{
    return getArea()!=rhs.getArea();
}

//greater than or equal to (>=)
bool Square::operator>=(const Square& rhs) const
{
    return getArea()>=rhs.getArea();
}

//less than or equal to(<=)
bool Square::operator<=(const Square& rhs) const
{
    return getArea()<=rhs.getArea();
}