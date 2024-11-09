//Overload funcation calling opertor
#include<iostream>
using namespace std;

class Number
{
  int n;
    public:
      Number(int num)
      {
        n=num;
      }
      void display()
      {
        cout<<"n="<<n<<endl;
      }
      // funcation calling opertor function
      Number opertor()(int numo)
      {
        n=numo;
        return this;
      }
};
int main()
{
    Number n1(10); //Calling the constructor
    n1.display();

    n1(30); //Calling the funcation calling opertor ()
    n1.display();

    return 0;
}