#include<iostream>
using namespace std;
int main()
{
    int num[]={56,75,22,18,90};
    int *ptr;
    cout<<"Elements of the array:\n";
    for (size_t i = 0; i < 5; i++)
        cout<<"num["<<i<<"]:"<<num[i]<<endl;

    //Allocating base address of num to ptr* pointer variable
    ptr=num;   //Same as -->  ptr=&num[0];
    cout<<"Value of ptr:"<<*ptr<<"  ("<<ptr<<")"<<endl;

    ptr++;
    cout<<"Value of ptr++:"<<*ptr<<"  ("<<ptr<<")"<<endl;

    ptr--;
    cout<<"Value of ptr--:"<<*ptr<<"  ("<<ptr<<")"<<endl;

    ptr=ptr+2;
    cout<<"Value of ptr+2:"<<*ptr<<"  ("<<ptr<<")"<<endl;

    return 0;
}