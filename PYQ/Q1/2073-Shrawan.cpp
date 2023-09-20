//WAP to create class "time" with data members hours, minute, and second/ Then add two "time" objects by taking object as argument and also returning object as argument.

#include <iostream>
using namespace std;
class Time
{
	int hour, minute, second;
public:
	void getdata()
	{
		cout << "Enter hour, minute, second: " << endl;
		cin >> hour >> minute >> second;
	}
	void showdata()
	{
		cout << hour << ":" << minute << ":" << second << endl;
	}
	Time add(Time& a, Time& b)
	{
		Time temp;
		temp.hour = a.hour + b.hour;
		temp.minute = a.minute + b.minute;
		temp.second = a.second + b.second;
		if (temp.second >= 60)
		{
			temp.second -= 60;
			temp.minute++;
		}
		if (temp.minute >= 60)
		{
			temp.minute -= 60;
			temp.hour++;
		}
		return temp;
	}
};
int main()
{
	Time a, b, c;
	a.getdata();
	b.getdata();
	c = c.add(a, b);
	c.showdata();
	return 0;
}