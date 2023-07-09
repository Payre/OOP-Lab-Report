//WAP in CPP to illustrate the concept of inline function.

#include <iostream>
using namespace std;

inline float feet2inc(float a)
{
	return a * 12;
}

int main()
{
	float feet;
	cout << "Foot: ";
	cin >> feet;
	cout << "Inches value is: " << feet2inc(feet);
	return 0;
}