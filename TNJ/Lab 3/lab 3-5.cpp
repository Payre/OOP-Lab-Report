/*Assume that an object represents an employee report that contains information like employee id, total bonus, total overtime in a particular year.
Use an array of objects to represent n employees' reports. Write a program that displays the report.
Use setpara() member function to set report attributes by passing the arguments and member function displayreport() to show the report according to the parameter passed.
Display the report in the following format.

An employee with ... ... ... has received Rs ... ... ...as a bonus
and 
had worked ... ... ... hours as overtime in the year ... ... ...*/
#include <iostream>
using namespace std;
class employee
{
    int emp_id;
    int year;
    float bonus;
    float overtime;
    public:
    void setpara(int emp_id, int year, float bonus, float overtime)
    {
        this->emp_id=emp_id;
        this->year=year;
        this->bonus=bonus;
        this->overtime=overtime;
    }

    void displayreport()
    {
        cout<<"An employee with "<<emp_id<< "has received Rs "<<bonus<<" as a bonus and "<<"had worked "<<overtime<<" hours as overtime in the year "<< year<<endl;
    }
};

int main()
{
    int n, emp_id, year;
    float bonus, overtime;
    cout<<"Enter the number of employee"<<endl;
    cin>>n;
    employee a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter employee id, year, bonus and over time "<<i+1<<endl;
        cin>>emp_id>>year>>bonus>>overtime;
        a[i].setpara(emp_id, year, bonus, overtime);
    }
    for (int i = 0; i < n; i++)
    {
        a[i].displayreport();
    }
    return 0;
}