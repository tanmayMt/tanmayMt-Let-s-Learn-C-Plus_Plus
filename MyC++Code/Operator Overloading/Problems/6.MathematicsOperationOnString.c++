#include<iostream>
#include<string.h>
using namespace std;
class String
{
    private:
      char *p;
      int len;
    public:
      String()
      {}
      String(char *s)
      {
        len=strlen(s);
        p=new char[len+1];
        strcpy(p,s);
      }
      void display()
      {
        cout<<p<<endl;
      }
      friend String operator +(String,String);
      friend int operator <= (String,String);
};
String operator+(String s4,String s5)
{
  String z;
  z.len=s4.len+s5.len;
  z.p=new char[z.len+1];
  strcpy(z.p,s4.p);
  strcat(z.p,s5.p);
  return z;
}
int operator <= (String s4,String s5)
{
  int a=s4.len;
  int b=s5.len;
  if(a<=b)
     return 1;
  else
     return 0;
}

int main()
{
    String s1="New ";
    String s2="York";
    String s3="Delhi";

    s1.display();
    s2.display();
    s3.display();
    
    String s=s1+s2;
    s.display();

    if(s1<=s)
    {
      s1.display();
      cout<<" smaller than "<<endl;
      s.display();
      cout<<endl;
    }
    else
    {
      s3.display();
      cout<<" smaller than "<<endl;
      s.display();
      cout<<endl;
    }
    return 0;
}