#include<iostream>
using namespace std;
class Test
{
    int code;
    static int count;//1(t1),2(t2),3(t3)
   public:
    void setcode(void)
    {
        code=++count;//t1.code=1,t2.code=2,t3.code=3
    }
    void showcode(void)
    {
        cout<<"Object Number:"<<code<<endl;//
    }
    static void showcount(void)
    {
        cout<<"Count:"<<count<<endl;//t1.count=2,t2.count=3
    }
};
int Test :: count;
int main()
{
    Test t1,t2;

    t1.setcode();
    t2.setcode();

    Test::showcount();    //Accessing static function

    Test t3;
    t3.setcode();

    Test::showcount();

    t1.showcode();
    t2.showcode();
    t3.showcode();
}