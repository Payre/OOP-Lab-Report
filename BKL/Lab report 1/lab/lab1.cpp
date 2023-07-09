//WAP in C to add two complex numbers using the concept of structure

#include <iostream>
using namespace std;

struct compx
{
    int real;
    int imag;
};

void add(compx&, compx&);

int main()
{
    compx d1, d2;
    cout << "Enter the coeff of real\t: ";
    cin >> d1.real;
    cout << "Enter the coeff of imaginary\t: ";
    cin >> d1.imag;
    cout << "Enter the coeff of real\t: ";
    cin >> d2.real;
    cout << "Enter the coeff of imaginary\t: ";
    cin >> d2.imag;
    add(d1, d2);
    return 0;
}

void add(compx& da, compx& db)
{
    cout << "Sum: " << da.real + db.real << " + " << da.imag + db.imag << "i";
}
