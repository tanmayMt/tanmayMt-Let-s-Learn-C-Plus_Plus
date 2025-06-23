#include <iostream>
using namespace std;

class PrimeNumber
{
private:
    int n;

public:
    PrimeNumber(int data)
    {
        n = data;
    }
    bool prime_or_not()
    {
        }
};

int main()
{
    int x;

    cout << "Enter an integer:";
    cin >> x;

    PrimeNumber pm = PrimeNumber(x);
    pm.prime_or_not();
    return 0;
}
