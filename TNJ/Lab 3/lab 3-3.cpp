/*Create a class called carpark that has int data member for car id, int data member for charge/hour, and float data member for the parked time.
Make functions to set data members and show the charges and parked hours of the corresponding car id.
Make functions for setting and showing the data members. Member function should be called from other functions.*/
#include <iostream>
//using namespace std;
class CarPark
{
private:
    int carid;
    int rate;
    float time;
public:
    void setid(int id)
    {
        carid = id;
    }
    void setcharge(int rate)
    {
        this->rate = rate;
    }
    void settime(float time)
    {
        this->time = time;
    }
    void show()
    {
        std::cout<<"Car id: "<<carid<<std::endl;
        std::cout<<"Total Charge: "<<rate*time<<std::endl;
        std::cout<<"Hours parked: "<<time<<std::endl;
    }
};
int main()
{
    //variable and object declartion
    CarPark c;
    int id, rate;
    float time;

    //takes carid from the user and sends to the class
    std::cout<<"Enter car ID: ";
    std::cin>>id;
    c.setid(id);
    //sets charge per hour
    std::cout<<"Enter charge: "<<std::endl;
    std::cin>>rate;
    c.setcharge(rate);
    //takes input as time
    std::cout<<"Enter time (in hour): "<<std::endl;
    std::cin>>time;
    c.settime(time);

    //output
    c.show();
    return 0;
}

