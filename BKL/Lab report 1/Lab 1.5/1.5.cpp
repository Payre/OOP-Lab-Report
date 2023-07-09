//WAP in CPP to illustrate the concept of default arguments

#include <iostream>
using namespace std;
//function declare garda value halo vane tei ho default arg.
void swap(int a = 3, int b = 6)
{
	cout << a << " " << b << endl;
	int *c;
	c = new int;
	*c = a;
	a = b;
	b = *c; 
	cout << a << " " << b << endl;
	delete c;
}

int main()
{
	swap();
	swap(5);
	swap(6, 7);
	return 0;
}
