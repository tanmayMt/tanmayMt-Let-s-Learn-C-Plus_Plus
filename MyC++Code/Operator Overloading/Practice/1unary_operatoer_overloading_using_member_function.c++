#include<iostream>
using namespace std;
int d;
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
      A operator -();
};
A A :: operator-()
{
  a=-a;
}
int main()
{
    // d=5;
    // -d;
    A obj(5);

    -obj;

    obj.display();
    return 0;
}