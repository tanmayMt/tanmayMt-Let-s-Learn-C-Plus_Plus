#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    cout<<"Enter your full name:";
    getline(cin,name);
    cout<<"Name:"<<name;
    return 0;
}