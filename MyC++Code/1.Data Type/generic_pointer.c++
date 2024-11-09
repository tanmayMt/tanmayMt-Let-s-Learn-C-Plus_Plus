#include<iostream>
using namespace std;
int main()
{
    int a;
    a=7;

    void * gp;//This is called generic pointer
    int * ip;//integer pointer 
    
    ip=&a;
    cout<<"ip=%d"<<ip<<endl;

    gp=ip;
    cout<<"gp="<<gp<<endl;
    
    ip=gp;
    cout<<"ip=%d",ip<<endl;
    
    return 0;
}