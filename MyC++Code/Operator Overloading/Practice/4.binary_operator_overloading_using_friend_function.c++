#include <iostream>
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
      void dispaly()
      {
        cout<<"a="<<a<<endl;
      }
      friend A operator+ (A,A);
};
A operator+ (A x,A y)
{
    A z;
    z.a=x.a+y.a;
    return z;
}

int main()
{
    A obj1(10),obj2(5);
    A obj;

    obj=20+obj2;
    obj.dispaly();
    return 0;
}