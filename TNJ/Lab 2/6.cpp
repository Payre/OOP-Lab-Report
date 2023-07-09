/*
Write a program that displays the current monthly salary of chief executive officer, information officer, and system analyst, programmer that has been increased by 9, 10, 12, and 12 percentages respectively in year 2010.
Let us assume that the salaries in year 2009 are

Chief executive officer Rs. 35000/m
Information officer Rs. 25000/m
System analyst Rs. 24000/m
Programmer Rs. 18000/m
Make a function that takes two arguments; one salary and the other increment. Use proper default argument.*/
#include <iostream>
using namespace std;
float in(float a=1, float b=1)
{
    return a + (a*(b/100));
}

int main()
{
    float ceo = 35000, io = 25000, sa =24000, pp=18000;
    float c=9, i=10,s=11,p=12;
    cout<<"Salary of CEO: "<<in(ceo, c)<<endl;
    cout<<"Salary of Information Officer: "<<in(io, i)<<endl;
    cout<<"Salary of System analyst: "<<in(sa, s)<<endl;
    cout<<"Salary of Programmer: "<<in(pp, p)<<endl;
    return 0;
}