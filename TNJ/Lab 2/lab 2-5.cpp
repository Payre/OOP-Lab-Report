/*Assume that employee will have to pay 10 percent income tax to the government. Ask user to enter the employee salary.
Use inline function to display the net payment to the employee by the company.*/
#include <iostream>
using namespace std;
inline float tax(float& a);
int main()
{
    float sal;
    cout<<"Enter the salary for government officer: ";
    cin>>sal;
    cout<<"The net salaray of the officer is "<<tax(sal);
    return 0;
}
inline float tax(float& a)
{
    return a-(0.1 * a);
}