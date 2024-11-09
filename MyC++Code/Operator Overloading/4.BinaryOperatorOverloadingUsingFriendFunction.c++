#include<iostream>
using namespace std;
class A
{
    private:
      int a;
    public:
      A() //Do nothing constructure
      {
      }
      A(int x)
      {
        a=x;
      }
      void dispaly()
      {
        cout<<"a="<<a<<endl;
      }
      friend A operator +(A x,A y);
};
A operator +(A x,A y)
{
    A z;
    z.a=x.a+y.a;
    return z;
}
int main()
{
    A obj1(10);
    A obj2(5);
    A obj;

    obj=obj1+obj2;
    obj.dispaly();

    obj=obj1+10;
    obj.dispaly();

    obj=10+obj2;
    obj.dispaly();
}