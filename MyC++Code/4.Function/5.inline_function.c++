#include<iostream>
using namespace std;
inline float mul(float x,float y)
{
    return x*y;
}
int main()
{
    float a,b,mul1;
    cout<<"Enter two number:"<<endl;
    cin>>a>>b;
    mul1=mul(a,b);
    cout<<"mul="<<mul1;
    return 0;
} 