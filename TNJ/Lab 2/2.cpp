/*Write a program using the function overloading that converts feet to inches. Use function with no argument, one argument and two arguments.
Decide yourself the types of arguments. Use pass by reference in any one of the function above.*/
#include<iostream>
using namespace std;
void i2f(float i, float f)
{
    cout<<"Conversion using two argument: "<<f*12<<endl;
}
void i2f(float& f)
{
    cout<<"Conversion using one argument: "<<f*12<<endl;
}
void i2f()
{
    float af;
    cout<<"Enter the value of feet (function): ";
    cin>>af;
    cout<<"Conversion using no argument of "<<af<<" is "<<af*12<<endl;
}
int main()
{
    float inch, feet;
    i2f();
    cout<<"Value of feet for referencing: ";
    cin>>feet;
    i2f(feet);

    i2f(inch=1, feet=10);
    return 0;
}