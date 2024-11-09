#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="Hello";
    cout<<"s1="<<s1<<endl;


    string s2(); //string constructor with no argument    or empty string
    cout<<"s2="<<s2<<endl;

    string s3("Hello"); //string constructor with single argument
    cout<<"s3="<<s3<<endl;

    string s4();
    cout<<"s4="<<s4<<endl;
    return 0;
}