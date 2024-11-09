#include<iostream>
using namespace std;
int & max(int &,int &);
int & max(int &x,int &y)
{
    if(x>y)
       return x;
    else 
       return y;
}

int main()
{
    int a,b;
    a=76;
    b=23;
    int m=max(a,b);
    cout<<"Maximum Value is "<<m<<endl;
}