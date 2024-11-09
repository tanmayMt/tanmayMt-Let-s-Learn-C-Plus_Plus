#include<iostream>
using namespace std;

void counter()
{
    static int count;
    cout<<count++;
}

int main()
{
    for(size_t i = 0; i < 5; i++)
    {
        counter();
        cout<<""<<endl;
    }
}