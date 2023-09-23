
/*WAP to explain the importance of object as function argument and returning object.

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
}*/

/*rethrow exceptoin*/
#include<iostream>
using namespace std;
void rethrowdemo(int x, int y)
{
	try
	{
		if (y != 0)
		{
			cout << "The division is: " << (x / y) << endl;
		}
		else
		{
			throw(y);
		}
	}
	catch(int z)
	{
		cout << "gomenosai, i cannot do this"<<endl;
		throw;
	}
}
int main()
{
	int a, b;
	cout << "Enter a, b" << endl;
	cin >> a >> b;
	try
	{
		rethrowdemo(a, b);
	}
	catch(int p)
		{
			cout << "Stop being a pussy!";
		}
	return 0;
}