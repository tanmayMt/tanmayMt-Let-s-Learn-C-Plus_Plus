#include<iostream>
using namespace std;
int main()
{
    int sum=100;
    int & total=sum;//total is a reference variable

    total=45;
    cout<<"sum="<<sum<<endl;
    cout<<"total="<<total<<endl;

    sum=55;
    cout<<"sum="<<sum<<endl;
    cout<<"total="<<total<<endl;


    cout<<"Address of   sum is "<<&sum  <<endl;
    cout<<"Address of total is "<<&total<<endl;


    // int d='\n';
    // int f=78;
    // int & a=d;
    // int & a=f;
    return 0;
}