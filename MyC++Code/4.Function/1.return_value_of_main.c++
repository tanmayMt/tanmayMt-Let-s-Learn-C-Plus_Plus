#include<iostream>
using namespace std;
int hi()
{
    cout<<"This is hi()\n";
    return 0;
}
int main()
{
    cout<<"Hello\n";
    int x=hi();                      
    cout<<x;
    // return(0);
}
