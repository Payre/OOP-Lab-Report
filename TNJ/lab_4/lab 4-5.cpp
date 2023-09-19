/*Write a program that illustrates the following relationship and comment on them. 
i) const_object.non_const_mem_function
ii) const_object.const_mem_function
iii) non_const_object.non_const_mem_function
iv) non_const_object.const_mem_function*/
#include <iostream>
using namespace std;
class A
{
    int x;
public:
    A(): x(0){}
    void const_mem_function() const
    {
        cout << "Constant member function" << endl;
    }
    void non_const_mem_function()
    {
        cout << "Non-constant member function" << endl;
    }
};
int main()
{
    const A non_const_object; // Creating a const object of class A
    A const_object;       // Creating a non-const object of class A

    /*This line calls the non-const member function `non_const_mem_function()` on the const object `non_const_object`.
    But since a const object can only call const member functions, this line will give an error.
    non_const_object.non_const_mem_function();*/

    // This line calls the const member function `const_mem_function()` on the const object `non_const_object`.
    non_const_object.const_mem_function();

    // This line calls the const member function `const_mem_function()` on the non-const object `const_object`.
    const_object.non_const_mem_function();

    // This line calls the const member function `const_mem_function()` on the non-const object `const_object`.
    const_object.const_mem_function();
    return 0;
}
