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
      friend void operator--(A);
};
void A :: operator++()  //Member Function
{
  ++a;
}
void operator--(A x)   //Friend Function
{
  x.a=--x.a;
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

    --obj3;
    
    obj3.display();
}