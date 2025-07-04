#include <stdio.h>

int multiply(int *);

int multiply(int * a){

    *a= (*a) *10;
    return *a;
    
}

int main(){

    int a;
    int* b= &a;

    printf("enter the value of a:");
    scanf("%d", &a);

    printf("the value of a is %d", multiply(&a));

    return 0;
}