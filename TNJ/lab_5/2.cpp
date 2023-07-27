/*Write a class to store x, y, and z coordinates of a point in three-dimensional space.
Overload addition and subtraction operators for addition and subtraction of two coordinate objects.
Implement the operator functions as non-member functions (friend operator functions).*/
#include <iostream>
class Space
{
    float x, y, z;
    public:
    Space(float x, float y, float z): x(x), y(y), z(z) {}
    Space(): x(0), y(0), z(0) {}
    friend Space operator+(const Space& o, const Space& p);
    friend Space operator-(const Space& o, const Space& p);
    void display()
    {
        std::cout << "x: " << x << " y: " << y << " z: " << z << std::endl;
    }
};
Space operator+(const Space& o, const Space& p)
{
    Space temp;
    temp.x = o.x + p.x;
    temp.y = o.y + p.y;
    temp.z = o.z + p.z;
    return temp;
}
Space operator-(const Space& o, const Space& p)
{
    Space temp;
    temp.x = o.x - p.x;
    temp.y = o.y - p.y;
    temp.z = o.z - p.z;
    return temp;
}
int main()
{
    Space o(1,2,3);
    Space p(4,5,6);
    Space q;
    q = o + p;
    q.display();
    q = o - p;
    q.display();
    return 0;
}