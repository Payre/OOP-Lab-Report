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
}