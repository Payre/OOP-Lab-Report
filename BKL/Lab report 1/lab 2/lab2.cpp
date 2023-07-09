//WAP in C to input the name, roll, marks and address of n students entered by the user and display the entered details using the concept of structure.

#include <iostream>
using namespace std;

struct students
{
	char name[50];
	int roll;
	char addr[100];
};

void eifo(students&);
void pinfo(students&);

int main()
{
	int no;
	cout << "Enter the number of students to be recorded: " << endl;
	cin >> no;
	students* aa = new students[no]; //students aa[no]; equivalent ho
	//students vanne structure ko addrs xa, tyo addresss ma aa vanne variable create vayo.
	//aa vannu vane ko aa[no] vannu ho.
	for(int i = 0; i<no;i++)
	{
		cout << "Enter details for student " << i + 1 << endl;
		eifo(aa[i]);
	}
	for (int i = 0; i < no; i++)
	{
		cout << "Details for student " << i + 1 << endl;
		pinfo(aa[i]);
	}
	delete[] aa;
	return 0;
}
//how do you use structure by pass by reference.

void eifo(students& da)
{
	cout << "Enter name:\t";
	cin.ignore(); //Ignores enter
	cin.getline(da.name, 50); //getline ko lagi return end of stuff. ig?
	/*ignore and getline belong to namespace std,*/
	cout << "Enter roll:\t";
	cin >> da.roll;
	cout << "Enter address:\t";
	//cin >> da.addr; for this white space is the end character.
	cin.ignore();
	cin.getline(da.addr, 100); //for this enter is the end character. enter normally gets pass around, it lingers in buffer for some reason!?
}
//it store data until there is a whitespace. space na aaun jel samma data store hunxa, ani stop!
//getline it store data until there is a enter, ani stop!
void pinfo(students& da)
{
	cout << "Name of student:\t" << da.name << endl;
	cout << "Roll of the student:\t" << da.roll << endl;
	cout << "Address:\t" << da.addr << endl;
}

//mutliple input yeutai line ma lina milos vanera, it isn't flushed out, for more control ig?