/*Write a program that has a class with a dynamically allocated character array as its data member.
One object should contain "Engineers are" and another should contain " Creatures of logic".
Member function join() should concatenate two strings by passing two objects as arguments.
Display the concatenated string through a member function. Use constructors to allocate and initialize the data member.
Also, write a destructor to free the allocated memory for the character array.
Make your own function for the concatenation of two strings.*/

#include <iostream>
#include <cstring>
using namespace std;
class String
{
    char *str;
    public:
    //constructor
    String()
    {
        str = new char[30];
    }
    String(char const *str1)
    {
        str = new char[30];
        strcpy(str, str1);
    }
    //methods
    void join(String &a, String &b)
    {
        str = strcat(a.str, b.str);
    }
    void display()
    {
        cout<<endl<<str;
    }
    //destructors
    ~String()
    {
        delete []str;}
};

int main()
{
    const char *ch1 = "Engineers are", *ch2 = " Creatures of Logic";
    String s1(ch1), s2(ch2);
    s1.join(s1, s2);
    s1.display();
    return 0;
}


/*
#include <iostream>
#include <cstring>
using namespace std;
using namespace std;

class String {
    char *str;
    int len;

public:
    String() {
        len = 0;
        str = new char[len + 1];
    }

    String(const char *s) {
        len = strlen(s);
        str = new char[len + 1];
        strcpy(str, s);
    }

    void join(const String &a, const String &b) {
        len = a.len + b.len;
        delete[] str;
        str = new char[len + 1];
        strcpy(str, a.str);
        strcat(str, b.str);
    }

    void display() {
        cout << str << endl;
    }

    ~String() {
        delete[] str;
    }
};

int main() {
    const char *s1 = "Engineers are";
    const char *s2 = " Creatures of logic";
    String a(s1), b(s2), c;
    c.join(a, b);
    a.display();
    b.display();
    c.display();
    return 0;
}*/