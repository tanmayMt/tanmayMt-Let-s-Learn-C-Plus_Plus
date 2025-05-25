#include <iostream>
using namespace std;
int hi()
{
    cout << "C++: This is hi()\n";
    return 0;
}
// void main() //❌ This is wrong
//  In C++, main() returns an integer type value to the operatng system.
// Therefore, every main() in c++ should end with return(0) statement; otherwise a warning or an error might occur.
int main()
{
    cout << "Retun in c++: Hello\n";
    int x = hi();
    cout << x;
    return (0);
}
