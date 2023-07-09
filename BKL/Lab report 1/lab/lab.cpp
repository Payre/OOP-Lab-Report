//WAP in C to add two complex numbers using the concept of structure

#include <iostream>
using namespace std;
struct compx
{
	int real;
	int imag;
};
void inpu(compx&, compx&); //pasing by reference
void add(compx&, compx&); //the fucntion takes address, doesn't copy anything.

//when you pass by varaible you copy that, and create a different dabba.
int main()
{
	compx d1, d2;
	inpu(d1, d2); // this sends address, kina vane address magi ra xa prototyping ma.
	add(d1, d2); //same thing
	return 0;
}

void inpu(compx& d1, compx& d2) //reference ko lagi ho yaha use hune, main batai fix vai sako ke aaunxa vanera, scope. je change gare pani address ma change hunxa.
{
	cout << "Enter the coeff of real\t: ";
	cin >> d1.real;
	cout << "Enter the coeff of iamginary\t: ";
	cin >> d1.imag;
	cout << "Enter the coeff of real\t: ";
	cin >> d2.real;
	cout << "Enter the coeff of iamginary\t: ";
	cin >> d2.imag;
}

void add(compx& d1, compx& d2) //this can be the same varaible name as before
{
	int dad;
	dad = d1.imag + d2.imag;
	if (dad >= 0)
		cout << "sum: " << d1.real + d2.real << "+" << d1.imag + d2.imag << "i";
	else
		cout << "sum: " << d1.real + d2.real << d1.imag + d2.imag << "i";
}