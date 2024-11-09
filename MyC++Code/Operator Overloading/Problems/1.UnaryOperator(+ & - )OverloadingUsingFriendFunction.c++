#include<iostream>
using namespace std;

int a,r;

class A
{
    private:
      int a;
    public:
      A()
      {
        
      }
      A(int x)
      {
        a=x;
      }
      void display()
      {
        cout<<"a="<<a<<endl;
      }
      void operator+();
      friend A operator-(A);//One argument for unary operator overloading function
};
void A::operator+()
{
  a=+a;
}
A operator-(A x)//One argument for unary operator overloading function
{
    A z;
    z.a=-x.a;
    return z;
}
int main()
{
  // a=5;
  // r=-a;
  // cout<<"r="<<r<<endl;

  //For member function
  A obj(-4);
  +obj;  
  obj.display();

  //For friend function
  A obj1(4),obj2;
  obj2=-obj1;
  obj2.display();

  return 0;
}