/*q1. WAP that illustrates the oop concept*/
#include <iostream>
using namespace std;
class Student
{
	int roll;
	char name[20];
	float marks;
	char address[50];
public:
	void getdata()
	{
		cout << "Enter name, roll, marks, address" << endl;
		cin >> name >> roll >> marks >> address;
	}
	void showdata()
	{
		cout << "The entered information are:" << endl;
		cout << name << endl << roll << endl << marks << endl << address;
	}
};
int main()
{
	Student s;
	s.getdata();
	s.showdata();
	return 0;
}