/*3. Write a meaningful function that shows the use of constant object and constant function.
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


//q6.

#include <iostream>
using namespace std;

class person
{
protected:
	char name[50];
	int age;
public:
	void getperson()
	{
		cout << "Enter name and age: " << endl;
		cin >> name >> age;
	}
	void showperson()
	{
		cout << "The name and age of the person is: " << endl;
		cout << name << age;
	}
};
class student : public person
{
protected:
	int roll;
	char college[70];
	float marks;
public:
	void getstudent()
	{
		cout << "Enter roll, collge name, and marks: " << endl;
		cin >> roll >> college >> marks;
	}
	void showstudent()
	{
		cout << "The roll, college and marks aer:: " << endl;
		cout << roll << college << marks;
	}
};
class leader :public person
{
protected:
	char party[40];
	char position[50];
public:
	void getleader()
	{
		cout << "Enter party name and position: " << endl;
		cin >> party >> position;
	}
	void showdata()
	{
		cout << "Party name and position is: " << endl;
		cout << party << position;
	}
};
class actor : public person
{
protected:
	char role[50];
	char movie[40];
public:
	void getactor()
	{
		cout << "enter role and movie: " << endl;
		cin >> role >> movie;
	}
	void showact()
	{
		cout << "The role and movie is: " << endl;
		cout << role << movie;
	}
};
int main()
{
	student s;
	actor a;
	leader l;
	s.getstudent();
	a.getactor();
	l.getleader();
	s.showstudent();
	a.showact();
	l.showdata();
	return 0;	
}*/

/*q9*/

#include <iostream>
using namespace std;

template <class T>
class A
{
protected:
	T a;
};

class B: public A<int>
{
public:
	int myfunc(int x)
	{
		x = this->a;
		return x;
	}
};

int main()
{
	B b;
	b.myfunc(3);
	return 0;
}
