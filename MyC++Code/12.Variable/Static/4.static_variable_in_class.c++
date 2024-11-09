#include<iostream>
using namespace std;
class Item
{
    private:
     static int count;
     int number;
    public:
     void getdata(int num)
     {
        number=num;
        count++;
     }
     void getcount(void)
     {
        cout<<"count:";
        cout<<count<<"\n";
     }
};
int Item :: count; 
int main()
{
    Item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(56);
    b.getdata(90);
    c.getdata(56);

    a.getcount();
    b.getcount();
    c.getcount();
    
    return 0;
}