#include<iostream>
#include<string>
using namespace std;
class Student
{
     int roll;
     string name;
     float marks;
    public:
     void getData()
     {
        cout<<"Enter Roll No.";
        cin>>roll;

        cout<<"Enter Student Name:";
        getline(cin,name);     //We did not get any space to give input for name

        cout<<"Entre Marks:";
        cin>>marks;
     }
     void display()
     {
        cout<<"Roll No."<<roll<<"  ";
        cout<<"Name:"<<name<<"  ";
        cout<<"Marks:"<<marks<<"  "<<endl;
     }
};
int main()
{
    Student s1;
    s1.getData();
    s1.display();
    return 0;
}