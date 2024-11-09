#include<iostream>
using namespace std;
int factional(int);
int factional(int n)
{
    if(n==1)
       return 1;
    else
       return n*factional(n-1);
}
int main()
{
    int num,fac;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    fac=factional(num);
    cout<<"The factional value is "<<fac<<endl;
    return 0;
}