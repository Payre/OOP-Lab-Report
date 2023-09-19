/*Write a program to set a structure to hold a date (mm,dd and yy), assign values to the members of the structure and print out the values in the format 11/28/2004 by function.
Pass the structure to the function*/

#include <iostream>
using namespace std;
struct date
{
    int mm;
    int dd;
    int yy;
};
void store(date&);
int main()
{
    struct date aa;
    aa.mm = 11;
    aa.dd = 28;
    aa.yy = 2004;
    store(aa);
}
void store(date& aa)
{
    cout<<aa.mm <<"/" <<aa.dd <<"/"<<aa.yy;
}

//copying this, cause teacher wants this in paper