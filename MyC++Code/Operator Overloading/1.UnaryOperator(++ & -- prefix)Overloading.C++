#include<iostream>
using namespace std;
int c;
class A
{
    private:
      int a;
    public:
      A(){}
      A(int x)
      {
        a=x;
      }
      void display()
      {
        cout<<"a="<<a<<endl;
      }
      //A operator++();
      void operator++();
      friend A operator--(A);
};
void A :: operator++()  //Member Function
{
  ++a;
}
A operator--(A x)   //Friend Function
{
  A z;
  z=--x.a;
  return z;
}
int main()
{
    // c=5;
    // ++c;
    // For member function
    A obj;
    A obj1(5);

    ++obj1;
    
    obj1.display();


    //For friend function
    A obj2;
    A obj3(10);

    obj2=--obj3;
    
    obj2.display();

    return 0;
}