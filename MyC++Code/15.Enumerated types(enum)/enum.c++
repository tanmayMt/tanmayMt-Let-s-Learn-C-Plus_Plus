#include<iostream>
using namespace std;
enum shape
{
    circle=9,rectangle=5,triangle=67
};
int main()
{
    shape s=circle;
    cout<<"s="<<s<<endl;
    shape sh;
    sh=(shape)7;
}