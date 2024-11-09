#include<iostream>
using namespace std;
void g(const int& x)
{ 
    x++; 
}   // ERROR

int main()
{
    int i=10;
    g(i);
}