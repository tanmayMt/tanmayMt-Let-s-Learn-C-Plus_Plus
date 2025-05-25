#include <stdio.h>
int hi()
{
    printf("C: This is hi()\n");
}
void main()
// int main()
{
    printf("Retun in c: Hello\n");
    int x = hi();
    printf("%d", x);
    // return(0);
}
