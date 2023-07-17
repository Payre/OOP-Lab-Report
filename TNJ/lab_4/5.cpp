/*
    Write a program that illustrates the following relationship and comment on them. 

i) const_object.non_const_mem_function

ii) const_object.const_mem_function

iii) non_const_object.non_const_mem_function

iv) non_const_object.const_mem_function*/

#include <iostream>
using namespace std;

class A
{
    int x;
public:
    A()
    {
        x = 0;
    }
    void constdisplay() const
    {
        cout << "Constant member function" << endl;
    }
    void display()
    {
        cout << "Non-constant member function" << endl;
    }
};
int main()
{
    const A a1; // Creating a const object of class A
    A a2;       // Creating a non-const object of class A

    // This line calls the non-const member function `display()` on the const object `a1`.
    // But since a const object can only call const member functions, this line will give an error.
    a1.display();

    // This line calls the const member function `constdisplay()` on the const object `a1`.
    a1.constdisplay();

    // This line calls the const member function `constdisplay()` on the non-const object `a2`.
    a2.display();

    // This line calls the const member function `constdisplay()` on the non-const object `a2`.
    a2.constdisplay();
    return 0;
}
