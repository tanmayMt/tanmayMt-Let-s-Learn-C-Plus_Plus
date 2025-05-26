#include <iostream>
#include <cmath>
using namespace std;

// Abstract class
class Shape
{
public:
    // Pure virtual function
    virtual float area() = 0;
};

// Rectangle class
class Rectangle : public Shape
{
private:
    float height, width;

public:
    Rectangle(float l, float w)
    {
        height = l;
        width = w;
    }

    float area()
    {
        return height * width;
    }
};

// Triangle class
class Triangle : public Shape
{
private:
    float width, height;

public:
    Triangle(float b, float h)
    {
        width = b;
        height = h;
    }

    float area()
    {
        return 0.5 * width * height;
    }
};

int main()
{
    Shape *shape;
    Rectangle r = Rectangle(10, 5);
    Triangle t = Triangle(10, 6);

    shape = &r;
    cout << "Area of Rectangle: " << shape->area() << endl;

    shape = &t;
    cout << "Area of Triangle: " << shape->area() << endl;

    return 0;
}
