#include <stdio.h>

int main()
{
    int a=2,b=5;
    (a&b)?printf("True\n"):printf("False\n");
    (a&&b)?printf("True\n"):printf("False\n");
    printf("%d %d %d %d %d\n",a&b,a|b,a^b,~a,~b);
    printf("%d",50<<4);

    return 0;
}