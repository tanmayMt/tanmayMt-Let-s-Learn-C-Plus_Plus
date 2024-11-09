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

    cout<<"\n"<<endl;

    string st1="Road";
    string st2="Read";
    cout<<"Before Swapping\n";
    cout<<"st1="<<st1<<endl;
    cout<<"st2="<<st2<<endl;

    st1.swap(st2);

    cout<<"After Swapping\n";
    cout<<"st1="<<st1<<endl;
    cout<<"st2="<<st2<<endl;
}