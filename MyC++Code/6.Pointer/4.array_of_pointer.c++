#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
int main()
{
    int i = 0;
    char *ptr[10] = {
        "Book",
        "Television",
        "Computer",
        "Sports"};

    for (size_t i = 0; i < 4; i++)
    {
        cout << "ptr[" << i << "]: " << ptr << " | ";
    }

    // char str[25];
    // cout << "Enter your favorite leisure pursuit:";
    // cin >> str;
    // for (int i = 0; i < 4; i++)
    // {
    //     if (!strcmp(str, ptr[i]))
    //     {
    //         cout << "Your favorite pursuit is found at possition: " << i << endl;
    //         break;
    //     }
    // }
    // if (i == 4)
    //     cout << "Not found in the list<\n";
}