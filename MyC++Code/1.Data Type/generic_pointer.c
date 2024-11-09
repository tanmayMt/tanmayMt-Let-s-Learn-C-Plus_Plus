#include<stdio.h>

int main()
{
    int a;
    a=7;

    void * gp;//This is called generic pointer
    int *ip;  //integer pointer 

    ip=&a;
    printf("ip=%d\n",ip);

    gp=ip;
    printf("gp=%d\n",gp);

    ip=gp;
    printf("ip=%d",ip);

    return 0;
}