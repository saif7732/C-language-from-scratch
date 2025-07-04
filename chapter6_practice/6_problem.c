#include <stdio.h>

// Write a program to print the value of a variable i by using “pointer to pointer” type
// of variable.

int main(){

    int a;
    int* b = &a;
    int** c = &b;

    printf("enter the value of a:");
    scanf("%d", &a);

    printf("the value at address *b is %d\n", *b);
    printf("the value at address **c is %d\n", **c);

    return 0;
}