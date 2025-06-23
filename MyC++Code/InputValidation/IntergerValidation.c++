#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter an integer:";
    while (!(cin >> num))
    {
        cout << "Invalid Number ! Try Again:";
        cin.clear();
        cin.ignore(10000, '\n'); // Remove bad input
    }

    cout << "You have enter:" << num << endl;
    return 0;
}