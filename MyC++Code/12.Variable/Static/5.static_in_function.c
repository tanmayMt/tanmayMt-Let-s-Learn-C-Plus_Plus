#include<stdio.h>

void counter()
{
    static int count;
    printf("%d",count++);
}

int main()
{
    for(size_t i = 0; i < 5; i++)
    {
        counter();
        printf("");
    }
}