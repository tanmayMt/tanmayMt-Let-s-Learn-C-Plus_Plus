#include<stdio.h>
int main()
{
    int i=34;
    float f=32.42;
    void *ptr=i;
    printf("ptr=%d\n",ptr);

    void *ptrf=f;
    printf("ptr=%d\n",ptrf++);
    return 0;
}