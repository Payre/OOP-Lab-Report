/*Write a program that has a class to represent time.
The class should have constructors to initialize data members hour, minute, and second to 0 and to initialize them to values passed as arguments.
The class should have a member function to add time objects and return the result as a time object.
There should be functions to display time in 12-hour and 24-hour format.*/
#include <iostream>
class Time
{
    int hour, minute, second;
    public:
    Time(int hour, int minute, int second); //prototyping, constructor that has arguments
    Time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }
    Time add(Time &d, Time &e)
    {
        Time time1;
        time1.hour = d.hour + e.hour;
        time1.minute = d.minute + e.minute;
        time1.second = d.second + e.second;
        if (time1.second >= 60)
        {
            time1.second = time1.second%60;
            time1.minute +=1;
        }
        if (time1.minute >= 60)
        {
            time1.minute = time1.minute%60;
            time1.hour +=1;
        }
        return time1;
    }
    void Display12HourFormat()
    {
        if (hour>12)
        {
            std::cout << hour - 12<< " hour :" << minute << " minute :" << second << std::endl;
        }
        else
        {
            Display24HourFormat();
        }
    }
    void Display24HourFormat()
    {
        std::cout << hour << "hour :" << minute << " minute :" << second << std::endl;
    }

};

Time::Time(int hour, int minute, int second)
{
    this -> hour = hour;
    this -> minute = minute;
    this -> second = second;
}

int main()
{

    int hour, minute, second;
    std::cout<<"Enter Hour, Minute, and Second: (for 1)"<<std::endl;
    std::cin>>hour>>minute>>second;
    Time t1(hour, minute, second);
    std::cout<<"Enter Hour, Minute, and Second: (for 2)"<<std::endl;
    std::cin>>hour>>minute>>second;
    Time t2(hour, minute, second);
    Time t3 = t3.add(t1, t2);

    t3.Display12HourFormat();
    t3.Display24HourFormat();
}