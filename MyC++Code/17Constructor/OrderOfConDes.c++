#include <iostream>
using namespace std;
class Sample
{
private:
    static int i;

public:
    Sample()
    {
        i++;
        cout << "Creation of object no. " << i << "\n";
    }
    ~Sample()
    {
        i--;
        cout << "Destruction of object no. " << i << "\n";
    }
};
int Sample ::i = 0;

int main()
{
    Sample a;
    {
        Sample b;
        Sample c;
    }
    Sample d;

    return (0);
}