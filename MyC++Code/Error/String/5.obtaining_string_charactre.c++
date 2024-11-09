#include<iostream>
#include<string>
using namespace std;
void display(string &str)
{
    cout<<"Size:"<<str.size()<<endl;
    cout<<"Length:"<<str.length()<<endl;
    cout<<"Capacity:"<<str.capacity()<<endl;
    cout<<"Maximum Size:"<<str.max_size()<<endl;
    cout<<"Empty:"<<(str.empty()?"yes":"No")<<endl;
}
int main()
{
    string str1;
    cout<<"Initial status:\n";
    display(str1);

    cout<<""<<endl;

    string str2=string("INDIA");
    cout<<"Status Now:\n";
    display(str2);
}