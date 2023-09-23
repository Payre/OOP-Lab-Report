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
}

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
}*/


/*WAP to add private data of two different classes using non-memeber function.
#include <iostream>
using namespace std;

class B;  // Forward declaration of class B

class A
{
	int a;
public:
	A() : a(0) {}
	A(int b) : a(b) {}
	void showdata()
	{
		cout << "A a = " << a << endl;
	}
	friend int add(A& m, B& n);  // Declare the friend function
};

class B
{
	int b;
public:
	B() : b(0) {}
	B(int c) : b(c) {}
	void showdata()
	{
		cout << "B b = " << b << endl;
	}
	friend int add(A& m, B& n);  // Declare the friend function
};

int add(A& m, B& n)
{
	return m.a + n.b;  // Access private members of both classes via friend function
}

int main()
{
	A a(2);
	B b(3);
	int c;
	c = add(a, b);  // Call the friend function to add private data
	cout << "C = " << c;
	return 0;
}
*/
/*q9.

#include <iostream>
using namespace std;

template <class T>
class Matrix
{
	T a[3][3];

public:
	// Default constructor
	Matrix()
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				a[i][j] = 0;
			}
		}
	}

	// Member function to sort the matrix elements (bubble sort)
	void sort()
	{
		for (int k = 0; k < 9 - 1; k++)
		{
			for (int i = 0; i < 9 - k - 1; i++)
			{
				if (a[i / 3][i % 3] > a[(i + 1) / 3][(i + 1) % 3])
				{
					// Swap the elements
					T temp = a[i / 3][i % 3];
					a[i / 3][i % 3] = a[(i + 1) / 3][(i + 1) % 3];
					a[(i + 1) / 3][(i + 1) % 3] = temp;
				}
			}
		}
	}

	// Member function to display the matrix
	void display()
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
};

int main()
{
	Matrix<int> mat;
	mat.display(); // Display the matrix before sorting

	mat.sort();    // Sort the matrix elements
	mat.display(); // Display the sorted matrix

	return 0;
}*/
/*error handling catch all*/
#include <iostream>
using namespace std;

int main()
{
	int x, y;
	char c[16] = "kritipur";
	cout << "Enter dividend: " << endl;
	cin >> x;
	cout << "Enter divisor: " << endl;
	cin >> y;
	try
	{
		if (y != 0)
		{
			cout << "The division is: " << (x / y )<< endl;
		}
		else
		{
			throw(y);
		}
		for (int i = 0; i <= 20; i++)
		{
			if (i > 6)
			{
				throw(c[i]);
			}
			cout << c[i] << endl;
		}
	}
	catch (...)
	{
		cout << "an error has occrred." << endl;
	}
	return 0;
}