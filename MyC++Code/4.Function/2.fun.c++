#include<iostream>
using namespace std;
void fun(...)
{
    cout<<"This is fun()\n";
}
int main()
{
    cout<<"This is main()\n";
    fun(67,87,90,45);
}