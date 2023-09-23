/*1 WAP to mutliply two complex numbers.
#include <iostream>
class Complx
{
	int real, img;
public:
	Complx(): real(0), img(0) {}
	Complx(int a, int b):real(a), img(b) {}
	Complx multiply(Complx& n)
	{
		Complx temp;
		temp.real = (real * n.real) - (real * n.img);
		temp.img = (real * n.img) + (img * n.real);
		return temp;
	}
	void showdata()
	{
		std::cout << "The complex number is : " << real << " " << img << "i";
	}
};
int main()
{
	Complx a(2, 2), b(3, 4), c;
	c = a.multiply(b);
	c.showdata();
	return 0;
}*/

/*2. WAP designing a class called midpoint to find mid point between two points by returing object from member function using this pointer.
#include <iostream>

using namespace std;

class midpoint
{
	float a;
public:
	midpoint(): a(0) {}
	midpoint(float m): a(m) {}
	midpoint calcmidpoint(midpoint a)
	{
		midpoint temp;
		temp = (this->a + a.a) / 2;
		return temp;
	}
	void showdata()
	{
		cout << "The mid point is: " << a << endl;
	}
};
int main()
{
	midpoint a(2), b(3), c;
	c = a.calcmidpoint(b);
	c.showdata();
}*/

//Example for unary operator overloading.
#include<iostream>

class complex
{
	float real, img;
public:
	complex(): real(0), img(0) {}
	complex(float r, float i): real(r), img(i) {}
	void showdata()
	{
		std::cout << real << " +i " << img << std::endl;
	}
	complex operator++()
	{
		complex temp;
		temp.real = real++;
		temp.img = img++;
		return temp;
	}
	complex operator++(int)
	{
		complex temp;
		temp.real = real++;
		temp.img = img++;
		return temp;
	}
};
int main()
{
	complex a(2, 3);
	a++;
	a.showdata();
	return 0;
}