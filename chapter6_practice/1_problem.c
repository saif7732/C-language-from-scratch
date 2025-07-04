#include <stdio.h>

int main(){

    int a;
    int* b=&a;

    printf("enter the value of a:");
    scanf("%d",&a);

    printf("the address of a is %p\n", &a);
    printf("the value at address %p is %d\n",&a, *b);

    return 0;
}