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
      A operator++(int);
      friend A operator--(A,int);
      //friend void operator--(A,int);
};
A A :: operator++(int) //When we specify as a parameter int here it talls C++,we want to overload postfix operator
{
  A z;
  z.a=a++;
  z.a=a; 
  return z;
}
A operator--(A x,int)
{
  A z;
  z.a=x.a--;
  z.a=x.a;
  return z;
  // x.a=x.a--;
  // x.a=x.a;
}

int main()
{
    // c=5;
    // c--;
    A obj1;
    A obj(5);
    
    obj1=obj ++;

    obj1.display();


    //Postfix -- using friend function
    A obj3(10);

    obj1=obj3 --; 
    // obj3--;//return void

    obj1.display();
    // obj3.display();
    return 0;
}