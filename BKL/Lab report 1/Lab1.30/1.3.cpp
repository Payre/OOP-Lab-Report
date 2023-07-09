//3. WAP in CPP to find the area of circle and rectangle using the concept of function overloading.

#include <iostream>
#define PI 3.1415
using namespace std;

void area(int&);
void area(int&, int&);

int main()
{
	int n, r, l, b;
	cout << "1 circle and 2 for rectangle:\t";
	cin >> n;
	if (n == 1)
	{
		cout << "Enter the value of raduis\t:";
		cin >> r;
		area(r);
	}
	else
	{
		cout << "Enter the value of length\t:";
		cin >> l;
		cout << "Enter the value of breadth\t:";
		cin >> b;
		area(l, b);
	}
}

void area(int& r)
{
	cout << "Area of the circle is: " << PI * r * r;
}

void area(int& l, int &b)
{
	cout << "Area of the rectangle is: " << l * b;
}