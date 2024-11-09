#include <iostream>
using namespace std;
#include <string>
int main()
{
    string s1 = "Tanamy Roy";

    int len = s1.length();
    cout << "length of s1=" << len << endl;

    cout << "s1 with append=" << s1.append("sen") << endl;
    cout << "length of s1=" << s1.length() << endl;

    string s2 = "Arohi";
    cout << "s2[0]=" << s2[0] << endl;

    // User input string
    string name;
    cout << "Enter your name:";
    cin >> name;
    cout << "Hi " << name << endl;

    // User input string
    string fullname;
    cout << "Enter your full name:";
    getline(cin, fullname);
    cout << "hello " << fullname << endl;
}