#include<iostream>
using namespace std;

int a,b;
class OperatorOverloading
{
    private:
      int x;
    public:
      OperatorOverloading()
      {
        x=0;
      }
      OperatorOverloading(int a)
      {
        x=a;
      }

     OperatorOverloading operator+(OperatorOverloading Y)
     {
        OperatorOverloading Z;
        Z.x=x+Y.x;
     }

      void expense_money()
      {
        cout<<"x="<<x<<endl;
      }
};
int main()
{
    //When you are single
    OperatorOverloading Me;

    //When you become a husband
    OperatorOverloading My_Girl_friend(10000);

    //when you become a father
    OperatorOverloading My_Son(5000);

    Me=My_Girl_friend + (My_Son);  //calling operator overloading function
    Me.expense_money();

    return 0;
}