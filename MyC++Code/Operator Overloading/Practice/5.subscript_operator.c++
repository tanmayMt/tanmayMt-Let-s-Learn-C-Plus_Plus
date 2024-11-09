#include<iostream>
using namespace std;

class A
{
    private:
      int a[3];
    public:
      A(int *arr)
      {
        for (size_t i = 0; i < 3; i++)
        {
          a[i]=arr[i];
        }
      }
      int operator[](int i)
      {
        return a[i];
      }
};
int main()
{
    int arr[3]={2,4,6};
    A obj(arr);
    
    for (size_t i = 0; i < 3; i++)
    {
      cout<<arr[i]<<"\t";
    }
    
    return 0;
}