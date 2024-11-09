#include <iostream>
using namespace std;
void hi()
{
    cout << "hi\n";
}
class Student
{
private:
    int roll;
    float marks;

public:
    void getData();
    void display();
};
void Student::getData()
{
    cout << "Enter Roll No.";
    cin >> roll;
    hi();

    cout << "Entre Marks:";
    cin >> marks;
}
void Student::display()
{
    cout << "Roll No." << roll << "  ";
    cout << "Marks:" << marks << "  " << endl;
}
int main()
{
    Student s1;
    s1.getData();
    s1.display();
    // s1.hi();
    return 0;
}