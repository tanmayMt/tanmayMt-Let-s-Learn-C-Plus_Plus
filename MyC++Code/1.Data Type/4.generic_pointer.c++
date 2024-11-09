#include<iostream>
using namespace std;
int main()
{
    int a;
    a=7;

    void * gp;//This is called generic pointer
    int * ip;//integer pointer 
    
    ip=&a;
    cout<<"ip="<<ip<<endl;

    gp=ip; //Assign the value of int pointer(ip) to the the generic pointer(gp)
           // is acceptable
    cout<<"gp="<<gp<<endl;
    
    // ip=gp;  //But assign the value of generic pointer(gp) to the int pointer(ip) is not
    //         // is not acceptable.Means dereference is not acceptable.
    // cout<<"ip=%d",ip<<endl;
    
    //So we need to type case here
    ip=(int *)gp;
    cout<<"ip="<<ip<<endl;

    return 0;
}