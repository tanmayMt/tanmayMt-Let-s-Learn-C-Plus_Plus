#include<iostream>
using namespace std;
int main()
{
    int array[5]={54,72,89,39,59};
    int num;
    int i;
    int *ptr=array;

    cout<<"Enter the number to be searech:";
    cin>>num;


    for(i=0;i<5;i++);
    {
        if(*ptr==num)
        {
            cout<<"The number"<<num<< "is found at position:"<<i<<endl;
            break;
        }
        else
            ptr++;
    }
    return 0;
}