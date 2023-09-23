#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

class Student
{
	int roll;
	char name[20];
	float marks;
public:
	void getdata()
	{
		cout<<"Enter roll, name marks"<<endl;
		cin >> roll >> name >> marks;
	}
	void putdata()
	{
		cout << setw(10) << roll << setw(15) << name << setprecision(2) << setw(10) << marks << endl;
	}
};
int main()
{
	Student s;
	fstream inout;
	inout.open("student.txt", ios::out);
	int n;
		cout << "Enter the number of students: " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		s.getdata();
		inout.write((char*)&s, sizeof(s));
	}
	cout << "File written!";
	inout.close();
	return 0;
	
}