/*Write a simple program that converts the temperature in Celsius scale to Fahrenheit scale and vice versa using the basic concept of class and object.
Make separate classes for Celsius and Fahrenheit which will have the private members that hold the temperature value and make conversion 
functions in each class for conversion from one to another. For example, you need to have a function toFahrenheit() in class Celsius that converts 
to Fahrenheit scale and returns the value.*/

#include <iostream>
using namespace std;
class celsius
{
    float cel;
    public:
    void getdata()
    {
        cout<<"Enter in celsisu: ";
        cin>>cel;
    }
    void toFahrenheit()
    {
        cout<<"Celsisus to farenheit is: "<<(9*cel)/5+32<<endl;
    }
};

class fahrenheit
{
    float faren;
    public:
    void getdata()
    {
        cout<<"Enter in Farenheit: ";
        cin>>faren;
    }
    void tocelsius()
    {
        cout<<"farenheit to Celsisus is: "<<5*(faren-32)/9<<endl;
    }
};
int main()
{
    celsius a;
    fahrenheit b;
    a.getdata();
    a.toFahrenheit();
    b.getdata();
    b.tocelsius();
    return 0;
}