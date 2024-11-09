#include <iostream>
using namespace std;
int main()
{
    char ch = 'j';
    int i = 67;
    int j = 732;

    int *ptr;
    ptr = &i;
    cout << "Address of i is " << ptr << endl;

    ptr = &j;
    cout << "Address of i is " << ptr << endl;

    int array[5] = {56, 87, 58, 56, 23};
    int *ptra = array;

    for (size_t i = 0; i < 5; i++)
    {
        cout << "Address of array[" << i << "]=" << ptra << endl;
        // cout << "Address of array[" << i << "]=" << &ptra[i] << endl;
        ptra++;
    }
}