#include<iostream>
using namespace std;
int main()
{
    int i=34;
    float f=32.42;
    
    void *ptr;
    ptr=&i;
    cout<<"ptr="<<ptr<<endl;
    
    ptr=&f;
    cout<<"ptr="<<ptr<<endl;

    int *ptri=(int*)ptr;
    cout<<"ptri="<<*ptri<<endl;

    return 0;
}