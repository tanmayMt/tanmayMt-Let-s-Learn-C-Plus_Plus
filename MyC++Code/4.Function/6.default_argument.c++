#include<iostream>
using namespace std;
int main()
{
    int add(int,int d=10);

    int x=add(7);
    cout<<"x="<<x<<endl;

    int y=add(7,20);
    cout<<"y="<<y<<endl;
}
int add(int a,int b)
{
    return a+b;
}
