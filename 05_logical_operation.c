#include <stdio.h>

int main(){

    int a,b;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("the value of a && b is: %d\n",a&&b);
    printf("the value of a || b is: %d",a || b);

    return 0;
}