#include<stdio.h>
#include<string.h>
int main()
{
    char str1[2]="Hello";
    char *ptr=str1;
    printf("%s\n",ptr);
    int len=strlen(str1);
    printf("Length of str=%d\n",len);
    return 0;
}