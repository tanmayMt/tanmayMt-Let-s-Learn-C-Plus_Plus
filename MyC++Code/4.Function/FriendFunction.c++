#include <iostream>
using namespace std;
class Sample
{
private:
    int i;

public:
    friend void set(Sample);
};
void set(Sample A)
{
    A.i = 400;
}

int main()
{
    Sample X;
    set(X);
    return (0);
}