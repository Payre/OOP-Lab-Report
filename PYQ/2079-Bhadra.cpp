/*2. Write a program with function that takes two arguments as reference and assign the
average of the two argutnents to the greater one and return that by reference. Call this
function by assigning value to the function and display the both of both argument. What
will be the output?

#include <iostream>
using namespace std;
int& avg(int& a, int& b)
{
	if (a > b)
	{
		a = (a + b) / 2;
		return a;
	}
	else
	{
		b = (a + b) / 2;
		return b;
	}
}
int main()
{
	int a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	avg(a, b);
	cout << "The numbers are: " << a << " " << b << endl;
	return 0;
}*/

#include <iostream>
using namespace std;
class complex
{
	float real;
	float img;
public:
	complex() //default constructor
	{
		cout << "Inside default constructor" << endl;
		real = 0;
		img = 0;
	}
	complex(float r, float i):real(r), img(i) //parameterized constructor
	{
		cout << "Inside parametrized constructor" << endl;
	}
	complex(complex &c) //explict copy constructor
	{
		cout << "Inside copy constructor" << endl;
		real = c.real;
		img = c.img;
	}
	~complex() //destructor
	{
		cout << "Inside destructor" << endl;
	}
	void showdata()
	{
		cout << real << "+" << img << "i" << endl;
	}
};
int main()
{
	complex c1, c2(1.1, 2.4), c3(c2);
	c1.showdata();
	c2.showdata();
	c3.showdata();
	return 0;
}