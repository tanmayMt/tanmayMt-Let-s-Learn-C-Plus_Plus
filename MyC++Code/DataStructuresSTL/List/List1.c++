#include <iostream>
#include <list>
#include <iterator>
using namespace std;
class List1
{
};
int main()
{
    // Stores elements sequentially, where each element is connected to the
    // next. Adding and removing of elements can be done at both ends.
    // Not accessible by index.
    list<string> ls;
    ls = {"Volvo", "BMW", "Ford", "Mazda"};

    list<string>::iterator it;
    for (it = ls.begin(); it != ls.end(); ++it)
        cout << *it << " ";
}
