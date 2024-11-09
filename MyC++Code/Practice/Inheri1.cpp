#include<iostream>
using namespace std;
class Parent
{
    public:
      int id_p;
};
class Child :public Parent
{
    public:
      int id_c;
      //int id_p;
};
int main()
{
    Child c1;
    c1.id_p=100;
    c1.id_c=150;
    cout<<"Parent id is "<<c1.id_p<<endl;
    cout<<"child id is "<<c1.id_c<<endl;
    return 0;
}
