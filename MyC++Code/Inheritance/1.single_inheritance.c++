#include<iostream>
using namespace std;
class Dad //base class
{
    protected:
     int dad_saving;
    public:
     void getMoneyDad()
     {
        cout<<"Enter the saving money recived from dad:";
        cin>>dad_saving;
     }
     void display()
     {
        cout<<"The money recived from dad: "<<dad_saving<<endl;
     }
};
class Son:public Dad
{
    private:
     int son_money;
    public:
     void getMoneySon()
     {
        cout<<"Enter the saving money of the son:";
        cin>>son_money;
        son_money=son_money+dad_saving;
     }
     void display()
     {
        cout<<"Total money of son: "<<son_money<<endl;
     }  
};

int main()
{
    Son dabjit;
    dabjit.getMoneyDad();
    dabjit.getMoneySon();
    dabjit.display();
    return 0;
}