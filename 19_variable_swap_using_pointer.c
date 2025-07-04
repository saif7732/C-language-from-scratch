#include <stdio.h>

void swap(int*, int*);

void swap(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){

    int a,b;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d",&b);

    swap(&a,&b);

    printf("\n-----the values of a and b have been swapped-----\n\n");
    printf("the value of a is %d\n",a);
    printf("the value of b is %d\n",b);

    return 0;
}