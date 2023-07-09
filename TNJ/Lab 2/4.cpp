/*Write a function that passes two temperatures by reference and sets the larger of the two numbers to a value entered by user by using return by reference.*/
#include <iostream>
using namespace std;
float& ltemp(float& a, float& b);
int main()
{
    float a1,a2;
    cout<<"Enter temp1: ";
    cin>>a1;
    cout<<"Enter temp2: ";
    cin>>a2;
    float& ntp = ltemp(a1, a2); //aliasing
    cout<<"The large temperature is: "<<ntp<<endl;
    cout<<"Enter new value for large temperature: ";
    cin>>ntp;
    cout<<"final temperture is "<< a1 << " and " << a2;
    return 0;
}

float& ltemp(float& a, float& b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}