#include<iostream>
using namespace std;
class A
{
    private:
      int a;
    public:
      A()
      {
        a=0;
      }
      A(int x)
      {
        a=x;
      }
      void display()
      {
        cout<<"a="<<a<<endl;
      }
      A operator+(A);
};
A A :: operator+(A y)
{
  A z;
  z= a+y.a;
  return z;
}
int main()
{
    A obj1(10);
    A obj2(5);

    A obj;

    obj=obj1+obj2;
    
    obj.display();
}