#include <iostream>
using namespace std;

class Shape1
{
private:
    double l, b;

public:
    void getData()
    {
        cout << "Eneter values to calculate area of shape:";
        cin >> l >> b;
    }
    void area()
    {
        cout << "Area of Shape" << l << b << endl;
    }
};

int main()
{
    Shape1 s;
    s.getData();
    s.area();
    return (0);
}
