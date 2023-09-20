/*3. Write a meaningful function that shows the use of constant object and constant function.*/
#include <iostream>
using namespace std;

//class

class complex
{
	float real;
	float imag;
public:
	complex(): real(0), imag(0) {}
	complex(float r, float i)
	{
		real = r;
		imag = i;
	}
	void showdata() const //constant member function
	{
		cout << real << " + " << imag << "i" << endl;
	}
};
int main()
{
	const complex c1, c2(1.1, 2.4);
	c1.showdata();
	c2.showdata();
	return 0;
}
