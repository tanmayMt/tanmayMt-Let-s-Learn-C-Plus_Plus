#include<iostream>
using namespace std;

int a,b,c;

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
      //Operator Overtloading function
      A operator + (A y)
      {
        A sum;
        sum=a+y.a;
      }

      void dispaly()
      {
        cout<<"a="<<a<<endl;
      }
};
int main()
{
    //Addition between two built-in data type
    a=5;
    b=10;

    c=a+b;
    cout<<"c="<<c<<endl;

    //Addition between two user-define data type
    A obj; 
    A obj1(5);
    A obj2(10);

    obj=obj1+obj2;
    obj.dispaly();
    return 0;
}