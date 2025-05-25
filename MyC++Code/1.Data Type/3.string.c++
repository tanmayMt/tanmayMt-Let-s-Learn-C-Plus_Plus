#include <iostream>
using namespace std;
#include <string>
int main()
{
    char st[] = "ds";
    // cout << st;

    // string s1 = "Tanamy Roy";

    // int len = s1.length();
    // cout << "length of s1=" << len << endl;

    // cout << "s1 with append=" << s1.append(" sen") << endl;
    // cout << "length of s1=" << s1.length() << endl;

    // string s2 = "Arohi";
    // cout << "s2[0]=" << s2[0] << endl;
    // cout << "s2[at(3)]=" << s2.at(3) << endl;

    // // User input string
    // string name;
    // cout << "Enter your name:";
    // cin >> name;
    // cout << "Hi " << name << endl;

    // // User input string
    // string fullname;
    // cout << "Enter your full name:";
    // getline(cin, fullname);
    // cout << "hello " << fullname << endl;

    // find the position of a character in a string
    //  Find position of first occurrence
    string text = "Hello World";
    char target = 'c';
    // Find position of first occurrence
    size_t pos = text.find(target);

    if (pos != string::npos)
        // string::npos means “no position”

        //  🔹 What is std::string::npos in C++?
        // std::string::npos is a constant used to represent "not found" when using string operations like
        //.find(), .rfind(), .substr() etc.

        if (pos == string::npos)
        {
            cout << "Character not found." << endl;
        }
        else
        {
            cout << "Character found at index: " << pos << endl;
        }

    cout << pos;
}