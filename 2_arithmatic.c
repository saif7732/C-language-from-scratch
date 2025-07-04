#include <stdio.h>

int main()
{

    int a, b;
    int c;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("enter the value of b:");
    scanf("%d", &b);
    c = a * b;
    printf("the product of a and b is %d\n", c);

    int d, e;
    int f;
    printf("enter the value of d:");
    scanf("%d", &d);
    printf("enter the value of e:");
    scanf("%d", &e);
    f=d%e;
    printf("the remainder of %d is %d", d,f);

    return 0;
}