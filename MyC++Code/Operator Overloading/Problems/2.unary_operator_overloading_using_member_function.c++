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
      friend void operator-(A);
};
void operator-(A x)
{
  -x.a;   //not giving poper result in case of friend function
}
int main()
{
    A obj(5);
    -obj;

    obj.display();
    return 0;
}