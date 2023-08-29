/*Write a program to compare two objects of a class that contains an integer value as its data member.
Make overloading functions to overload equality(==), less than(<), greater than(>), not equal (!=), greater than or equal to (>=),
and less than or equal to(<=) operators using member operator functions.*/
#include <iostream>
using namespace std;
class Complex
{
    float real, imag;
    public:
    Complex(): real(0), imag(0) {}
    Complex(float real, float imag): real(real), imag(imag) {}
    int operator==(Complex &a)
    {
        if (real = a.real)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int operator<(Complex &a)
    {
        if(real<a.real)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int operator>(Complex &a)
    {
        if(real>a.real)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int operator>=(Complex &a)
    {
        if(real>=a.real)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int operator<=(Complex &a)
    {
        if(real<=a.real)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    float x = 3, y =3, p=4, q=4;
    Complex a(x, y), b(p,q);
    if (a==b)
    {
        cout<<"They is equal";
    }
    else{cout<<"They are not equal";}
}

