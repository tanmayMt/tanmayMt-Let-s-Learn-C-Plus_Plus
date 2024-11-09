#include<stdio.h>
int hi()
{
    printf("This is hi()\n");
}
int main()
{
    printf("Hello\n");
    int x=hi();
    printf("%d",x);
    // return(0);
}
