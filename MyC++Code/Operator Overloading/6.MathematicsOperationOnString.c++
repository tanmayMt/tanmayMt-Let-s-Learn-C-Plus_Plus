#include<iostream>
#include<string.h>
using namespace std;
class String
{
    private:
      char *p;
      int len;
    public:
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
};
int main()
{
    String s1="New ";
    s1.display();
    return 0;
}
//.\6.MathematicsOperationOnString.c++:23:15: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
//     String s1="New ";
//               ^~~~~~