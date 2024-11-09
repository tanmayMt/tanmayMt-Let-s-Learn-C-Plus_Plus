#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1("Road");
    string s2("Read");
    string s3("Red");
    cout<<"s1="<<s1<<endl;
    cout<<"s2="<<s2<<endl;
    cout<<"s3="<<s3<<endl;

    int x=s1.compare(s2);
    if(x==0)
       cout<<"s1==s2\n";
    else if(x>0)
       cout<<"s1>s2"<<endl;
    else
       cout<<"s1<s2\n";

    int a=s1.compare(0,2,s2,0,2);
    int b=s1.compare(0,2,s1,0,2);
    int c=s1.compare(0,2,s3,0,2);
    int d=s1.compare(s2.size()-1,1,s3,s3.size()-1,1);

    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    cout<<"c= "<<c<<endl;
    cout<<"d= "<<d<<endl;    
}