#include <iostream>
using namespace std;
class Code
{
private:
    int id;

public:
    Code(int id)
    {
        this->id = id;
    }
    Code(Code &x) // Copy constructor
    {
        this->id = x.id;
    }

    void modify(int x)
    {
        this->id = x;
    }
    void display()
    {
        cout << id;
    }
};
int main()
{
    Code A(100);
    Code B = A;

    cout << "\nId of A: ";
    A.display();
    A.modify(500);
    cout << "\nId of B(After modify()): ";
    B.display();

    // Code B(A); /// Copy constructor is called

    return (0);
}
