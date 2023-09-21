/*WAP to concatenate two user given string using the concept of operator overloading*/
#include <iostream>
#include <cstring>

class MyString {
private:
    char str[100];  // Fixed-size character array

public:
    // Default Constructor
    MyString() {
        str[0] = '\0';  // Initialize as an empty string
    }

    // Parameterized Constructor
    MyString(const char* s) {
        strcpy(str, s);  // Copy the entire source string
    }

    // Copy Constructor
    MyString(const MyString& s) {
        strcpy(str, s.str);  // Copy the entire source string
    }

    void display() const {
        std::cout << str;
    }

    // Overloaded + Operator
    MyString operator+(const MyString& s) const {
        MyString result;
        strcpy(result.str, str);  // Copy the first string
        strcat(result.str, s.str);  // Concatenate the second string
        return result;
    }

    // Overloaded = Operator
/*    MyString& operator=(const MyString& s) {
        if (this == &s) {
            return *this;
        }
        strcpy(str, s.str);  // Copy the entire source string
        return *this;
    }*/
};

int main() {
    MyString s1 = "Health is";  // Using Parameterized Constructor
    MyString s2 = " wealth";    // Using Parameterized Constructor
    MyString s3;                // Using Default Constructor
    s3 = s1 + s2;               // Using Overloaded + Operator

    s1.display();
    std::cout << " +";
    s2.display();
    std::cout << " = ";
    s3.display();
    std::cout << std::endl;

    return 0;
}
