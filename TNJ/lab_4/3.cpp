/*Write a class that can store Department ID and Department Name with constructors to initialize its members.
Write destructor member in the same class and display the message "Object n goes out of the scope".
Your program should be made such that it should show the order of constructor and destructor invocation.*/
#include <iostream>
#include <cstring>
using namespace std;
class Department
{
    int *id;
    char *name;
    public:
    Department()
    {
        id = new int;
        id = 0;
        name = new char[50];
    }
    Department(int& id1, const char* name1)
    {
        id = new int;
        *id = id1;
        name = new char[50];
        strcpy(name, name1);
    }
    ~Department()
    {
        cout<<"Object "<<*id<<" goes out of the scope";
        delete id;
        delete []name;
    }
};

int main()
{
    int id;
    char name[50];
    cout<<"Enter Department ID and Name:"<<endl;
    cin>>id>>name;
    Department d1(id, name);
}