#include <iostream>
using namespace std;

int main()
{
    // A lambda function in C++ is a quick, anonymous function you can define inline — without giving it a name.
    // 🧠 Memory Trick :
    // “Lambda = Lightweight Function”(You write it on the spot and use it immediately)

    auto add = [](int a, int b)
    {
        return a + b;
    };

    cout << add(3, 4) << endl;
    cout << add(30, 4);
    return 0;
}