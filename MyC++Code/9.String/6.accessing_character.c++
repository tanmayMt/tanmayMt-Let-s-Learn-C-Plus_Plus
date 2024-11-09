#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="ONE TWO THREE FOUR";

    cout<<"The string contains:\n";
    for (size_t i = 0; i < s.length(); i++)
        cout<<s.at(i);
    
    cout<<"The string contains:\n";
    for (size_t i = 0; i < s.length(); i++)
        cout<<s[i];   

    cout<<"\nTWO found at :"<<s.find("TWO")<<endl;

    cout<<"\nT found first at :"<<s.find_first_of('T')<<endl;

    cout<<"\nR found last at :"<<s.find_last_of('R')<<endl;

    cout<<"Substring:"<<s.substr(4,3);
}