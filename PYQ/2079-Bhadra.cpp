/*2. Write a program with function that takes two arguments as reference and assign the
average of the two argutnents to the greater one and return that by reference. Call this
function by assigning value to the function and display the both of both argument. What
will be the output?*/

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