/*Assume that you want to check whether the number is prime or not.
Write a program that asks for numbers repeatedly. When it finishes checking a number the program asks if the user wants to do another calculation.
The response can be 'y' or 'n'. Don't forget to use the object-oriented concept.*/
#include <iostream>
using namespace std;
class prime
{
private:
    int number;
    int check;
public:
    void getnum()
    {
        cin>>number;
    }
    void checkprime()
    {
        if (number==1)
        {
            cout<<"1 is neither prime nor composite"<<endl;
        }
        else if (number==2)
        {
            cout<<"2 is a prime number"<<endl;
        }
        else
        {
            for(int i=2;i<number;i++)
            {
                if(number%i==0)
                {
                    check = 1;
                    break;
                }
                else
                {
                    check = 0;
                }
            }
            if (check==0)
            {
                cout<<number<<" is a prime number"<<endl;
            }
            else
            {
                cout<<number<<" is not a prime number"<<endl;
            }
        }
    }
};
int main()
{
    prime p;
    char ch;
    do
    {
        cout<<"Enter a number to check whether it is prime or not"<<endl;
        p.getnum();
        p.checkprime();
        cout<<"Do you want to check another number? (y/n)"<<endl;
        cin>>ch;
    }while(ch=='y');
    return 0;
}