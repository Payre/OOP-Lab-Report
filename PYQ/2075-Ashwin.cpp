
/*WAP to explain the importance of object as function argument and returning object.*/

#include <iostream>
class Complex
{
	int real, img;
public:
	void getdata()
	{
		std::cin >> real >> img;
	}
	void showdata()
	{
		std::cout << real << "+" << img << "i";
	}
	Complex addition(Complex& a, Complex& b)
	{
		Complex temp;
		temp.real = a.real + b.real;
		temp.img = a.img + b.img;
		return temp;
	}
};
int main()
{
	Complex a, b, c;
	std::cout << "Enter first complex number: ";
	a.getdata();
	std::cout << "Enter second complex number: ";
	b.getdata();
	c = c.addition(a, b);
	c.showdata();
	return 0;
}