/*q. 5 WAP that converts object of Celisus type to object of Fahrenheit type. Concept of overloadding?
#include <iostream>

using namespace std;

class Faharenheit
{
	float f;
public:
	Faharenheit(): f(0) {}
	Faharenheit(float fa): f(fa) {}
	void showdata()
	{
		cout << "The farenheith tempr is: " << f;
	}
};
class Celsius
{
	float c;
public:
	Celsius(): c(0) {}
		Celsius(float cel): c(cel) {}
		void showdata()
	{
		cout << "The celsius tempr is: " << c;
	}
	operator Faharenheit()
	{
		float cel, fa;
		fa = (9*cel)/5 + 32;
		return fa;
	}
};
int main()
{
	Celsius c(32);
	Faharenheit f;
	f = c;
	f.showdata();
	return 0;
}*/

/*WAP to add two time objects using opeartor overloading.*/
#include <iostream>

using namespace std;

class Time
{
	int h, m, s;
public:
	Time(): h(0), m(0), s(0) {}
	Time(int hour, int min, int sec): h(hour), m(min), s(sec) {}
	void showdata()
	{
		cout << h << ":" << m << ":" << s << endl;
	}
	Time operator+(const Time& t) const
	{
		Time temp;
		temp.h = h + t.h;
		temp.m = m + t.m;
		temp.s = s + t.s;
		if (temp.s >= 60)
		{
			temp.s -= 60;
			temp.m++;
		}
		if (temp.m >= 60)
		{
			temp.m -= 60;
			temp.h++;
		}
		return temp;
	}
};
int main()
{
	Time t1(2, 20, 30), t2(2, 20, 30), t3;
	t3 = t1 + t2;
	t3.showdata();
	return 0;
}