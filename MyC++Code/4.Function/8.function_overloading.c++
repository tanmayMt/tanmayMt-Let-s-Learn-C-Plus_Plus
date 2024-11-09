#include<iostream>
using namespace std;

int add(int,int);
int add(int,int,int);

int add(int a,int b)
{
    int sum=a+b;
    cout<<"sum of two argu="<<sum<<endl;
}
int add(int a,int b,int c)
{
    int sum=a+b+c;
    cout<<"sum of three argu="<<sum<<endl;    
}
int main()
{
    int a,b;
    a=add('g','y');
    b=add(10,20,30);
    return 0;
}