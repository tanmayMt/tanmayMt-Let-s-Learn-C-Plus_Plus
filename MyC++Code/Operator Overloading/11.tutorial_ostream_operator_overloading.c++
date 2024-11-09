#include<iostream>
#include<string.h>
using namespace std;
class Person
{
  private:
    string name;
    int age;
  public:
    Person()
    {
      name="";
      age=0;
    }
    friend ostream& operator<<(ostream& output,Person& P);
    friend istream& operator>>(istream& input, Person& P);
};
ostream& operator<<(ostream& output,Person& P)
{
  output<<"My name is "<<P.name<<endl;
  output<<"My age is " <<P.age <<endl;
  return output;
}
istream& operator>>(istream& input, Person& P)
{
  input>>P.name;
  input>>P.age;
  return input;
}

int main()
{
  cout<<"Enter your name and age:"<<endl;

  Person me;
  cin>>me;
  cout<<me;
  
  return 0;
}