#include<iostream>
#include<conio.h>
using namespace std;
class Test
{
   public:
    int a;
    Test(int x)
    {
        a=x;
    }
    void display()
    {
        cout<<"a="<<a<<endl;
    }
    Test* operator->()
    {
        return this;
    }
};

int main()
{
    Test T(5);
    Test* tp;
    tp=&T;

    cout<<"T.a  : "<<T.a<<endl;   //Accessing 'a' normally
    cout<<"tp->a: "<<tp->a<<endl; //Accessing 'a' normally object pointer

    cout<<"T->a : "<<T->a<<endl;     //Accessing 'a' using overloaded -> operator

    getch();
    return 0;
}