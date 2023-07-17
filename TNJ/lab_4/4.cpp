/*Assume that one constructor initializes data member say num_vehicle, hour, and rate.
There should be a 10% discount if num_vehicle exceeds 10. Display the total charge.
Use two objects and show a bit-by-bit copy of one object to another (make your own copy constructor).*/
#include <iostream>
class ParkRate
{
    unsigned int num_vehicle, hour;
    float rate, charge;
    public:
    /*ParkRate()
    {
        num_vehicle = 0;
        hour = 0;
        rate = 0;
        charge = 0;
    }*/
    ParkRate(int nv, int h, float r) : num_vehicle(nv), hour(h), rate(r)
    {
        charge = (float)hour*rate;
        if (num_vehicle > 10)
        {
            charge -= (0.1*charge);
        }
    }
    ParkRate(ParkRate &c)
    {
        num_vehicle = c.num_vehicle;
        charge = c.charge;
        hour = c.hour;
        rate = c.rate;
        std::cout<<"Value Copied";
    }
    void display()
    {
        std::cout<<"Vechile Num :"<<num_vehicle<<std::endl<<"Charge :"<<charge<<std::endl<<"Hour :"<<hour<<std::endl<<"Rate :"<<rate<<std::endl;
    }
};

int main()
{
    ParkRate pr1(5, 1, 10), pr2(11, 2, 10), p3(pr1);
    pr1.display();
    pr2.display();
    p3.display();
}