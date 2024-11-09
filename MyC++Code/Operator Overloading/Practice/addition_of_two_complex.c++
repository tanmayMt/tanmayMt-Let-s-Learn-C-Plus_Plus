#include<iostream>
using namespace std;
class Complex
{
    private:
     int a,b;
    public:
     Complex()
     {
        a=0;
        b=0;
     }
     Complex(int x,int y)
     {
        a=x;
        b=y;
     }
     void display()
     {
        cout<<"a="<<a<<"  b="<<b<<endl;
     }
     Complex operator+(Complex y)
     {
        Complex z;
        z.a=a+y.a;
        z.b=b+y.b;
        return z;
     }
};


int main()
{ 
    Complex obj1=Complex(2,3);
    Complex obj2=Complex(4,6);
    Complex obj3;
    obj3=obj1+obj2;
    obj3.display();
    return 0;
}