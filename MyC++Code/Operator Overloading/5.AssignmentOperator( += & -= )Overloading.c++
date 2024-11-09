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

      }
      A(int x)
      {
        a=x;
      }
      void dispaly()
      {
        cout<<"a="<<a<<endl;
      }
      void operator-=(int);
      A friend operator+=(A,int);
};
void A :: operator-=(int)
{
  a-=5;
}

A operator+=(A x, int d)
{
    A z;
    z.a=x.a+=d;
    return z;

    // return A(x.a+=d);
}
int main()
{ 
    // d=10;
    // d+=5;
    // cout <<d<<endl;
    
    //For Member Function
    A obj2(100);

    obj2-=5;

    obj2.dispaly();


    //For Friend function
    A obj(10),obj1;
    
    obj1=obj+=5;

    obj1.dispaly();
    return 0;
}