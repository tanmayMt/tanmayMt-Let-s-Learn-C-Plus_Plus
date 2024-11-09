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
      friend A operator -(A);
};
A operator-(A x)
{
    return A(x.a=-x.a);
}
int main()
{
    A obj(5);
    obj=-obj;

    obj.display();
    return 0;
}