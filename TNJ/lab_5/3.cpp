/*Write a program to compare two objects of a class that contains an integer value as its data member.
Make overloading functions to overload equality(==), less than(<), greater than(>), not equal (!=), greater than or equal to (>=),
and less than or equal to(<=) operators using member operator functions.*/
#include <iostream>
class Complex
{
    float real, imag;
    public:
    Complex(): real(0), imag(0) {}
    Complex(float real, float imag): real(real), imag(imag) {}
    Complex operator==(Complex &a)
    {
        if (real = a.real)
            {
                return 1;
            }

    }
};
