#include <stdio.h>

int main(){

    //Write a program to print multiplication table of 10 in reversed order.


    int n,i,product;
    printf("Enter your number:");
    scanf("%d",&n);

    for(int i=n;i>0;i--){
        product=i*n;
        printf("%d x %d = %d\n",n,i,product);
    }

    return 0;
}