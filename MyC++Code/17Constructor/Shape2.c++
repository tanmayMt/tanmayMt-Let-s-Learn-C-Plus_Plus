#include <iostream>
using namespace std;

class Shape
{
private:
    double l, b;

public:
    // Constructor
    Shape(double l, double b)
    {
        cout << "Constructor is called\n";
        this->l = l;
        this->b = b;
    }
    ~Shape()
    {
        cout << "Constructor is called\n";
    }
    void area()
    {
        cout << "Area of Shape" << l << " " << b << endl;
    }
};

int main()
{
    double l1, b1;
    cout << "Eneter values to calculate area of shape:";
    cin >> l1 >> b1;

    Shape s(l1, b1);
    s.area();

    return (0);
}
