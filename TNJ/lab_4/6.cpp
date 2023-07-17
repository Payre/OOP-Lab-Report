/*
Create a class with a data member to hold a "serial number" for each object created from the class.
That is, the first object created will be numbered 1, the second 2, and so on by using the basic concept of static data members.
Use static member function if it is useful in the program. Otherwise, make a separate program that demonstrates the use of static member function.*/
#include <iostream>
class Serial
{
    static int count;
    int serial;
    public:
    Serial()
    {
        count++;
        serial = count;
    }
    void display()
    {
        std::cout<<"Serial Number :"<<serial<<std::endl;
    }
};
int Serial::count = 0;
int main()
{
    Serial s1, s2, s3;
    s1.display();
    s2.display();
    s3.display();
}