#include <iostream>
using namespace std;

class Arr
{
    private:
      int arr[5];
    public:
      Arr(int *p)
      {
        for(size_t i = 0; i < 5; i++)
          arr[i]=p[i];
      }

      int operator [](int k)
      {
        return(arr[k]);
      }
};

int main()
{
    int x[5]={1,2,3,4,5};
    Arr a(x);

    for (size_t i = 0; i < 5; i++)
    {
        cout<<a[i]<<"\t"; //invoke operator []() function
                          //Through which we can access private 
                          //member of the class Arr
    }
}