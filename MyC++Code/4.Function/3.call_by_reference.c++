#include<iostream>
using namespace std;
void swap(int &,int &);
void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;

}
int main()
{
    int a,b;
    cout<<"Enter two number for swapping:";
    cin>>a>>b;

    cout<<"Before swapping a="<<a<<" b="<<b<<endl;
    swap(a,b);
    cout<<"After swapping a="<<a<<" b="<<b<<endl;
}