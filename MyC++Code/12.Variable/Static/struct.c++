#include<iostream>
using namespace std;
struct complex
{
    int x=40;
    int y=20;
    private:
        int p=78;
};

int main()
{
    complex c1,c2,c3;
    // cout<<c1.x<<endl;
    // cout<<c1.p;

    c3=c1+c2;
    return 0;
}