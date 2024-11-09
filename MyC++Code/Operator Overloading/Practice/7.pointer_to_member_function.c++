#include<iostream>
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
     Test* operator ->()
     {
        return this;
     }
};

int main()
{
    Test t(5);
    Test* tp=&t;

    cout<<"t.a: "<<t.a<<endl;
    cout<<"tp->a: "<<tp->a<<endl;

    cout<<"t->a: "<<t->a<<endl;
    return 0;
    
}